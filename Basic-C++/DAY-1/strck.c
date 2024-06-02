#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Stack {
    int items[MAX];
    int top;
} Stack;

// Function to create a stack
void createStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to add an element to the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Function to remove an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}

// Function to get the top element of the stack
int top(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[s->top];
}

// Function to get the size of the stack
int size(Stack *s) {
    return s->top + 1;
}

int main() {
    Stack st;
    createStack(&st); // creation of stack

    // input
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);

    // size
    printf("Size of stack is : %d\n", size(&st));

    // remove
    pop(&st);

    // stack empty or not
    if (isEmpty(&st)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty\n");
    }

    // check top element
    printf("Top element of stack is : %d\n", top(&st));

    return 0;
}