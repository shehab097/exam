#include<stdio.h>

int main() {
    //
    int arr[] = { 2,4,6,8,0,5,7,4,3,5,6,7,8,9,9,5,34,3,3,54,5,6,7,5,5,5,0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0]; //let 1st element is maximum
    int min = arr[0];  // let 1st element is minimum 

    for (int i = 0;i < size;i++) {
        // for max
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("max= %d\n ", max);
    printf("min= %d\n ", min);

    
    return 0;
}