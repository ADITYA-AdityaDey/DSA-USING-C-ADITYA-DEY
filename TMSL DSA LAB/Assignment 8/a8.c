#include <stdio.h>

#define MAX_SIZE 100

// Structure to represent a priority queue element
struct PriorityQueueElement {
    int data;
    int priority;
};

// Structure to represent a priority queue
struct PriorityQueue {
    struct PriorityQueueElement elements[MAX_SIZE];
    int size;
};

// Function to initialize an empty priority queue
void initializeQueue(struct PriorityQueue* queue) {
    queue->size = 0;
}

// Function to check if the priority queue is empty
int isEmpty(struct PriorityQueue* queue) {
    return (queue->size == 0);
}

// Function to check if the priority queue is full
int isFull(struct PriorityQueue* queue) {
    return (queue->size == MAX_SIZE);
}

// Function to enqueue an element with a given priority
void enqueue(struct PriorityQueue* queue, int data, int priority) {
    if (isFull(queue)) {
        printf("Error: Priority Queue is full. Cannot enqueue element.\n");
        return;
    }

    struct PriorityQueueElement newElement;
    newElement.data = data;
    newElement.priority = priority;

    // Find the correct position to insert the new element based on priority
    int i = queue->size - 1;
    while (i >= 0 && queue->elements[i].priority < newElement.priority) {
        queue->elements[i + 1] = queue->elements[i];
        i--;
    }

    // Insert the new element at the correct position
    queue->elements[i + 1] = newElement;

    // Increment the size of the priority queue
    queue->size++;
}

// Function to dequeue the element with the highest priority
int dequeue(struct PriorityQueue* queue) {
    if (isEmpty(queue)) {
        printf("Error: Priority Queue is empty. Cannot dequeue element.\n");
        return -1; // Return a special value to indicate an error
    }

    // Get the element with the highest priority (at the front of the array)
    int data = queue->elements[0].data;

    // Shift the remaining elements to fill the gap
    for (int i = 1; i < queue->size; i++) {
        queue->elements[i - 1] = queue->elements[i];
    }

    // Decrement the size of the priority queue
    queue->size--;

    return data;
}

int main() {
    // Example usage of the Priority Queue
    struct PriorityQueue myQueue;
    initializeQueue(&myQueue);

    // Enqueue elements with priorities
    enqueue(&myQueue, 10, 3);
    enqueue(&myQueue, 20, 1);
    enqueue(&myQueue, 30, 2);

    // Dequeue elements with the highest priority
    printf("Dequeued: %d\n", dequeue(&myQueue));
    printf("Dequeued: %d\n", dequeue(&myQueue));
    printf("Dequeued: %d\n", dequeue(&myQueue));

    return 0;
}

