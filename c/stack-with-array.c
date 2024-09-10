#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define maximum size of the stack

// Stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Initialize the stack (setting top to -1 means stack is empty)
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

// Pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Peek the top element of the stack without removing it
// int peek(struct Stack *stack) {
//     if (isEmpty(stack)) {
//         printf("Stack is empty\n");
//         return -1;
//     }
//     return stack->arr[stack->top];
// }

// Display all elements in the stack
void display(struct Stack *stack) {
    // if (isEmpty(stack)) {
    //     printf("Stack is empty\n");
    //     return;
    // }
    printf("Stack elements: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initialize(&stack);

    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
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
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1)
                    printf("Popped %d from stack\n", value);
                break;
            // case 3:
            //     value = peek(&stack);
            //     if (value != -1)
            //         printf("Top element is %d\n", value);
            //     break;
            case 4:
                display(&stack);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
