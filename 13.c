#include <stdio.h>
#define MAX_ROW 100
#define MAX_COL 100

int main() {
    // row*col
    int row;
    int col;
    printf("Enter dimention (row*col):\n");
    scanf("%d %d", &row, &col);

    printf("\nEnter array 1 data: \n");
    int arr1[MAX_ROW][MAX_COL];
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter array 1 data: \n");
    int arr2[MAX_ROW][MAX_COL];
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nCalculating....\n\n");
    int arr[MAX_ROW][MAX_COL];
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    // sum  
    printf("sum of two array: \n");
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}