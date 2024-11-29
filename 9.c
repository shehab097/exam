#include <stdio.h>


void sort(int* arr, int size) {


    for (int i = 0;i < size;i++) {

        for (int j = 1;j < size;j++) {

            if (arr[j] < arr[j - 1]) {

                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}


int main() {
    // Your code goes here
    int arr[] = { 11,22,4,6,8,9,6,5,7,4,8,0,9,12,3,5,3,6,3,3,4,5,6 }; //number cannt be duplicate
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    printf("Midded or medium element: %d\n", arr[(size / 2)]);


    return 0;
}