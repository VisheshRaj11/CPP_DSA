#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int c[], int sizeA, int sizeB) {
    int i = 0, j = 0, k = 0;
    
    // Merging the two arrays
    while(i < sizeA && j < sizeB) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    // Add remaining elements from array a
    while(i < sizeA) {
        c[k++] = a[i++];
    }
    
    // Add remaining elements from array b
    while(j < sizeB) {
        c[k++] = b[j++];
    }
}

void mergeSort(int arr[], int n) {
    if(n <= 1) return; 
    
    // Divide the array into two halves
    int mid = n / 2;
    
   
    int* left = new int[mid];
    int* right = new int[n - mid];
    
    // Copy data to temporary arrays
    for(int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for(int i = 0; i < (n - mid); i++) {
        right[i] = arr[mid + i];
    }
    
   
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    
    // Merge the two sorted halves back into the original array
    merge(left, right, arr, mid, n - mid);
    
   
    delete[] left;
    delete[] right;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    mergeSort(arr, n);
    
    // Output sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}