#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5

// Stack structure
struct Stack {
    int arr[SIZE];
    int top;
};

// Initialize stack
void initStack(struct Stack* s) {
    s->top = -1;
}

// Check if stack is empty
bool isStackEmpty(struct Stack* s) {
    return s->top == -1;
}

// Check if stack is full
bool isStackFull(struct Stack* s) {
    return s->top == SIZE - 1;
}

// Push to stack
void push(struct Stack* s, int value) {
    if (isStackFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = value;
}

// Pop from stack
int pop(struct Stack* s) {
    if (isStackEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

// Swap top two elements
void swapTop(struct Stack* s) {
    if (s->top < 1) {
        printf("Not enough elements to swap\n");
        return;
    }
    int temp = s->arr[s->top];
    s->arr[s->top] = s->arr[s->top - 1];
    s->arr[s->top - 1] = temp;
}

// Print stack
void printStack(struct Stack* s) {
    printf("Stack: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

// Queue structure
struct Queue {
    char arr[SIZE];
    int front, rear, count;
};

// Initialize queue
void initQueue(struct Queue* q) {
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

// Check if queue is empty
bool isQueueEmpty(struct Queue* q) {
    return q->count == 0;
}

// Check if queue is full
bool isQueueFull(struct Queue* q) {
    return q->count == SIZE;
}

// Enqueue
void enqueue(struct Queue* q, char value) {
    if (isQueueFull(q)) {
        printf("Queue Full\n");
        return;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->arr[q->rear] = value;
    q->count++;
}

// Dequeue
char dequeue(struct Queue* q) {
    if (isQueueEmpty(q)) {
        printf("Queue Empty\n");
        return '\0';
    }
    char value = q->arr[q->front];
    q->front = (q->front + 1) % SIZE;
    q->count--;
    return value;
}

// Get front value
char getFront(struct Queue* q) {
    if (isQueueEmpty(q)) return '\0';
    return q->arr[q->front];
}

// Get rear value
char getRear(struct Queue* q) {
    if (isQueueEmpty(q)) return '\0';
    return q->arr[q->rear];
}

// Main
int main() {
    struct Stack s;
    initStack(&s);

    // Problem 7
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    int popped = pop(&s);
    printf("Popped value: %d\n", popped);  // Should print 30

    // Problem 8
    printf("Before swap:\n");
    printStack(&s);
    swapTop(&s);
    printf("After swap:\n");
    printStack(&s);

    // Problem 9
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 'A');
    enqueue(&q, 'B');
    enqueue(&q, 'C');

    char dequeued = dequeue(&q);
    printf("Dequeued value: %c\n", dequeued);  // Should print A

    // Problem 10
    printf("Is queue empty? %s\n", isQueueEmpty(&q) ? "Yes" : "No");
    printf("Is queue full? %s\n", isQueueFull(&q) ? "Yes" : "No");
    printf("Front value: %c\n", getFront(&q));
    printf("Rear value: %c\n", getRear(&q));

    return 0;
}
