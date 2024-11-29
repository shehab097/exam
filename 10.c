#include <stdio.h>
#include<stdlib.h>


void print_arr(int* arr, int size) {

    for (int i = 0;i < size;i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main() {

    int n = 10;
    int* arr = (int*)calloc(n, 4);

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2;i < n;i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    print_arr(arr, n);
    return 0;
}