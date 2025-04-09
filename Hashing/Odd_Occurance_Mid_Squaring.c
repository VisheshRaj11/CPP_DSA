#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100


// You are using GCC
unsigned int hash(int key, int tableSize) {
    int squared = key * key;
    int numDigits = 0;
    int temp = squared;

    while(temp>0){
        numDigits++;
        temp = temp/10;
    }

    int middleDigits = (numDigits / 2);
    int divisor = 1;
    for (int i = 0; i < middleDigits; i++) {
        divisor *= 10;
    }
    return (squared / divisor) % tableSize;
}

int getOddOccurrence(int arr[], int size) {
    
   int hashTable[MAX_SIZE]={0};
  
   for(int i = 0;i<size;i++){
       int idx = hash(arr[i],MAX_SIZE);
       hashTable[idx]++;
   }
   
   for(int i = 0;i<size;i++){
       int idx = hash(arr[i],MAX_SIZE);
       if(hashTable[idx]%2!=0){
           return arr[i];
       }
   }
   return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", getOddOccurrence(arr, n));

    return 0;
}