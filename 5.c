#include<stdio.h>

int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };

    int new_arr[10 - 1];

    int target = 5;

    int j = 0;
    for (int i = 0;i < 10;i++) {

        if (i == target) j++;

        new_arr[i] = arr[j++];
    }

    for (int i = 0;i < 9;i++) {
        printf("%d ", new_arr[i]);
    }
    
    return 0;
}