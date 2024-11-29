#include <stdio.h>
#define MAX_ROW 100
#define MAX_COL 100

int main() {
    // row*col
    int row;
    int col;

    scanf("%d %d", &row, &col);

    int arr[MAX_ROW][MAX_COL];

    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {

            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}