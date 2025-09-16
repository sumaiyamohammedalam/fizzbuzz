#include <stdio.h>

int main() {
    // Loop from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check for multiples of 15 first (both 3 and 5)
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        }
        // Check for multiples of 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // Check for multiples of 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // Otherwise, just print the number
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
