#include <stdio.h>

int main() {
    // Your code goes here
    int arr[100];
    arr[0] = 1;
    for (int i = 0;i < 5;i++) {

        for (int j = 0;j < 2 * i + 1;j++) {
            arr[j]
            printf("%d\t", arr[j]);
        }

        printf("\n");
    }
    return 0;
}