#include <iostream>
#include <vector>
using namespace std;

vector<int> heap; // Max heap stored as a vector

// Function to maintain the heap property after insertion:Make Heap.
void heapifyUp(int index) {
    int parent = (index - 1) / 2;
    if (index > 0 && heap[index] > heap[parent]) {
        swap(heap[index], heap[parent]);
        heapifyUp(parent); // Recur for the parent
    }
}

// Function to insert an element into the max heap
void insert(int value) {
    heap.push_back(value);         // Add the element at the end
    heapifyUp(heap.size() - 1);    // Restore the max heap property
}

// Function to maintain the heap property after deletion
void heapifyDown(int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap.size() && heap[left] > heap[largest]) {
        largest = left;
    }
    if (right < heap.size() && heap[right] > heap[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(largest); // Recur for the affected child
    }
}

// Function to remove and return the maximum element (root of the heap)
int extractMax() {
    if (heap.size() == 0) {
        throw out_of_range("Heap is empty");
    }

    int maxElement = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0); // Restore the max heap property

    return maxElement;
}

// Function to display all elements of the heap
void displayHeap() {
    for (int value : heap) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    // Inserting elements
    insert(20);
    insert(15);
    insert(30);
    insert(10);

    cout << "Heap elements: ";
    displayHeap();

    // Extracting maximum
    cout << "Extracted Max: " << extractMax() << endl;

    cout << "Heap after extracting max: ";
    displayHeap();

    return 0;
}