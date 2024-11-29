#include <stdio.h>

int main() {

    int count = 20;  // how many numner that u wanna count

    int n = 2;
    while (n++) {
        int isPrime = 1; // prime

        for (int i = 2;i <= n / 2;i++) {

            if (n % i == 0) { // i diye vag gele number ta prime naa
                isPrime = 0; //not prime
            }
        }

        if (isPrime) {
            printf("%d ", n);
        }

        if (n == count) {
            return 0;
        }
    }



    return 0;
}