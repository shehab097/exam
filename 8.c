#include <stdio.h>
#include<stdlib.h>

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

void print_arr(int* arr, int size) {

    for (int i = 0;i < size;i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}



int main() {
    //
    int arr[] = { 11,22,4,6,8,9,6,5,7,4,8,0,9,12,3,5,3,6,3,3,4,5,6 }; //number cannt be duplicate
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    print_arr(arr, size);

    int* newArr = (int*)calloc(size, 4);

    int j = 0;
    for (int i = 1;i < size;i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        }

        newArr[j++] = arr[i];

    }

    print_arr(newArr, j );

    return 0;
}

//8 - delete duplicate