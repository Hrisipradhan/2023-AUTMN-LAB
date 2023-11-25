#include <stdio.h>

#define MAX_SIZE 5

struct CircularQueue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct CircularQueue *cq) {
    cq->front = -1;
    cq->rear = -1;
}

int isEmpty(struct CircularQueue *cq) {
    return (cq->front == -1);
}

int isFull(struct CircularQueue *cq) {
    return ((cq->rear + 1) % MAX_SIZE == cq->front);
}

void enqueue(struct CircularQueue *cq, int value) {
    if (isFull(cq)) {
        printf("Queue is full. Enqueue failed.\n");
        return;
    }

    if (isEmpty(cq)) {
        cq->front = 0;
    }

    cq->rear = (cq->rear + 1) % MAX_SIZE;
    cq->items[cq->rear] = value;
    printf("%d enqueued.\n", value);
}

int dequeue(struct CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty. Dequeue failed.\n");
        return -1;
    }

    int value = cq->items[cq->front];

    if (cq->front == cq->rear) {
        initializeQueue(cq);
    } else {
        cq->front = (cq->front + 1) % MAX_SIZE;
    }

    printf("%d dequeued.\n", value);
    return value;
}

void traverseQueue(struct CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = cq->front;
        do {
            printf("%d ", cq->items[i]);
            i = (i + 1) % MAX_SIZE;
        } while (i != (cq->rear + 1) % MAX_SIZE);
        printf("\n");
    }
}

int main() {
    struct CircularQueue cq;
    initializeQueue(&cq);

    int choice, value;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Traverse\n4. Is Empty?\n5. Is Full?\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&cq, value);
                break;

            case 2:
                dequeue(&cq);
                break;

            case 3:
                traverseQueue(&cq);
                break;

            case 4:
                printf("%s\n", isEmpty(&cq) ? "Queue is empty." : "Queue is not empty.");
                break;

            case 5:
                printf("%s\n", isFull(&cq) ? "Queue is full." : "Queue is not full.");
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 6);

    return 0;
}
