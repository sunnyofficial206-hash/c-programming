#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <zip-file>\n", argv[0]);
        return 1;
    }

    int err = 0;
    zip_t *zip = zip_open(argv[1], ZIP_RDONLY, &err);
    if (zip == NULL) {
        zip_error_t ziperror;
        zip_error_init_with_code(&ziperror, err);
        fprintf(stderr, "Failed to open zip: %s\n", zip_error_strerror(&ziperror));
        zip_error_fini(&ziperror);
        return 1;
    }

    zip_int64_t num_entries = zip_get_num_entries(zip, 0);
    for (zip_int64_t i = 0; i < num_entries; i++) {
        struct zip_stat st;
        zip_stat_init(&st);
        if (zip_stat_index(zip, i, 0, &st) == 0) {
            printf("File %lld: %s (size: %lld)\n", (long long)i, st.name, (long long)st.size);

            zip_file_t *zf = zip_fopen_index(zip, i, 0);
            if (zf) {
                char *buf = malloc(st.size + 1);
                if (buf) {
                    zip_fread(zf, buf, st.size);
                    buf[st.size] = '\0';  // if it's text
                    printf("Contents:\n%s\n", buf);
                    free(buf);
                }
                zip_fclose(zf);
            } else {
                fprintf(stderr, "  Could not open file in zip: %s\n", st.name);
            }
        } else {
            fprintf(stderr, "  Could not stat index %lld\n", (long long)i);
        }
    }

    zip_close(zip);
    return 0;
}

