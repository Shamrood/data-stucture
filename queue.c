#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Check if the queue is full
bool isFull() {
    return (rear == MAX - 1);  // Queue is full if rear reaches the last index
}

// Check if the queue is empty
bool isEmpty() {
    return (front == -1);  // Queue is empty if front is -1
}

// Enqueue operation
void enqueue() {
    int value;
    printf("Enter the number: ");
    scanf("%d", &value);

    if (isFull()) {
        printf("Queue is full. Cannot enqueue!\n");
    } else {
        if (front == -1) {  // If the queue is empty
            front = 0;  // Set front to 0 when the first element is enqueued
        }
        rear++;
        queue[rear] = value;
        printf("%d enqueued successfully.\n", value);
    }
}

// Dequeue operation
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue!\n");
    } else {
        printf("%d is dequeued.\n", queue[front]);
        front++;
        if (front > rear) {  // If queue becomes empty after dequeue
            front = rear = -1;  // Reset to empty state
        }
    }
}

// Display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue contents:\n");
        for (int i = front; i <= rear; i++) {
            printf("queue[%d] = %d\n", i, queue[i]);
        }
    }
}

int main() {
    int opt;
    do {
        printf("\n.............\n");
        printf("1) Enqueue\n");
        printf("2) Dequeue\n");
        printf("3) Display\n");
        printf("0) Quit\n");
        printf(".............\n");
        printf("Choose your option: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Option! Try Again..\n");
        }
    } while (opt != 0);
    
    return 0;
}

