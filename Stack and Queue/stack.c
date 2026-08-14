
#include <stdio.h>
#define size 5  

int stack[size];
int top = -1;


void push(int value) {
    if (top == size - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop\n");
    }
    else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

// Function to peek (see top element)
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Top element is %d\n", stack[top]);
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}