#include <stdio.h>

#define MAX_SIZE 5

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue *q) {
    return (q->front == -1);
}

int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue *q, int value) {
    if (!isFull(q)) {
        if (isEmpty(q)) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
        printf("%d enqueued successfully.\n", value);
    } else {
        printf("Queue is full. Enqueue operation failed.\n");
    }
}

int dequeue(struct Queue *q) {
    int value = -1;
    if (!isEmpty(q)) {
        value = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            initializeQueue(q);
        }
        printf("%d dequeued successfully.\n", value);
    } else {
        printf("Queue is empty. Dequeue operation failed.\n");
    }
    return value;
}

void traverseQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    initializeQueue(&q);

    int choice, value;

    do {
        printf("\n----- Queue Operations Menu -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;

            case 2:
                dequeue(&q);
                break;

            case 3:
                traverseQueue(&q);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
