#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int front, rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(Queue* q) {
    return q->rear == MAX - 1;
}

// Function to add an element to the queue (enqueue)
void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->items[++q->rear] = value;
    printf("Enqueued %d\n", value);
}

// Function to remove an element from the queue (dequeue)
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front >= q->rear) {
        // The queue is now empty
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    printf("Dequeued %d\n", value);
    return value;
}

// Function to display the elements of the queue
void displayQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    return 0;
}
