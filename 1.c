#include<stdio.h>

int main() {
    //
    int arr[5];

    for (int i = 0;i < 5;i++) {
        scanf("%d", &arr[i]);
    }

    printf("Printing: \n");
    for (int i = 5 - 1;i >= 0;i--) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    int i = 5;
    while (i--){
        printf("%d ", arr[i]);
    }
    
    return 0;
}