
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else
        stack[++top] = x;
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}

// Insert an element at the BOTTOM of the stack
void insertAtBottom(int x) {
    if (top == -1) {
        push(x);
        return;
    }

    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

// Recursive function to reverse the stack
void reverseStack() {
    if (top == -1)
        return;

    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

// Display stack
void display() {
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter stack elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }

    printf("Original Stack: ");
    display();

    reverseStack();

    printf("Reversed Stack: ");
    display();

    return 0;
}
