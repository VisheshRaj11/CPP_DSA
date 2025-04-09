#include <stdio.h>

#define MAX 100

int heap[MAX];
int heapSize = 0;

// Function to insert an element into the heap
void insert(int value) {
    if (heapSize >= MAX) {
        printf("Heap is full\n");
        return;
    }
    
    // Insert the new element at the end of the heap
    heap[heapSize] = value;
    int current = heapSize;
    heapSize++;
    
    // Heapify the element upwards
    while (current > 0 && heap[(current - 1) / 2] < heap[current]) {
        // Swap the current element with its parent
        int temp = heap[(current - 1) / 2];
        heap[(current - 1) / 2] = heap[current];
        heap[current] = temp;
        
        // Move up to the parent
        current = (current - 1) / 2;
    }
}

// Function to remove and return the maximum element from the heap
int deleteMax() {
    if (heapSize <= 0) {
        printf("Heap is empty\n");
        return -1;
    }
    
    int max = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize--;
    
    int current = 0;
    // Heapify the element downwards
    while (current * 2 + 1 < heapSize) {
        int left = current * 2 + 1;
        int right = current * 2 + 2;
        int maxChild = left;
        
        if (right < heapSize && heap[right] > heap[left]) {
            maxChild = right;
        }
        
        if (heap[current] >= heap[maxChild]) {
            break;
        }
        
        // Swap the current element with the larger child
        int temp = heap[current];
        heap[current] = heap[maxChild];
        heap[maxChild] = temp;
        
        current = maxChild;
    }
    
    return max;
}

// Function to display the elements of the heap
void displayHeap() {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(5);
    insert(15);
    insert(30);

    printf("Heap elements: ");
    displayHeap();

    printf("Deleted max element: %d\n", deleteMax());

    printf("Heap after deletion: ");
    displayHeap();

    return 0;
}