#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Recursive function to copy a linked list
struct Node* copyList(struct Node* head) {
    if (head == NULL)
        return NULL;

    struct Node* newNode = createNode(head->data);
    newNode->next = copyList(head->next);
    return newNode;
}

// Function to print a linked list
void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Create original list: 1->2->3->NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Original list: ");
    printList(head);

    struct Node* copyHead = copyList(head);
    printf("Copied list: ");
    printList(copyHead);

    return 0;
}

