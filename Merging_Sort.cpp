#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr1[n];
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >>m;

    int arr2[m];
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }

    int k = 0, i=0, j=0;
    int arr[n+m];

    while(i<n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++;
            k++;
        }else if(arr1[i] > arr2[j]) {
            arr[k] = arr2[j];
            j++;
            k++;
        }else {
            arr[k] = arr1[i];
            k++;
            arr[k] = arr2[j];
            k++;
            i++;
            j++;
        }
    }

    while(i<n) {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m) {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    for(int i=0; i<n+m; i++) {
        cout << arr[i] << " ";
    }
}