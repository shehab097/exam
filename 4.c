//insert a number in any -by array

#include<stdio.h>

int main() {
    //
    int arr[5] = {1,2,3,4,5 };
    int newArr[6];

    int index;
    printf("Enter index:: ");
    scanf("%d", &index);

    int num;
    printf("Enter number:: ");
    scanf("%d", &num);

    int j = 0;
    for (int i = 0;i < index;i++) {
        newArr[i] = arr[j++];
    }

    newArr[index] = num;

    for (int i = index+1;i < 6;i++) {
        newArr[i] = arr[j++];
    }


    for (int x = 0;x < 6;x++) {
        printf("%d ", newArr[x]);
    }

    return 0;
}