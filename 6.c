#include<stdio.h>
//search any number inb array
int main() {
    //
    int arr[] = { 5,34,77,98,12,23,34,56,45,67,89,90,8,89 }; //number cannt be duplicate
    int size = sizeof(arr) / sizeof(arr[0]);

    int n;
    printf("Enter number that u wanna search:: \n");
    scanf("%d", &n);

    int index = -1;
    for (int i = 0;i < size;i++) {

        if (arr[i] == n) {
            index = i;
        }
    }

    if (index == -1) {
        printf("%d not found!\n",n);
    }
    else {
        printf("index: %d\n",index);
    }



    return 0;
}