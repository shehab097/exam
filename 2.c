#include<stdio.h>

int main() {
    //
    int arr[5] = { 2,4,6,8,0 };

    int newArr[5];
    for (int i = 0;i < 5;i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0;i < 5;i++) {
        printf("%d  ", newArr[i]);
    }
    return 0;
}