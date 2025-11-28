#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter a number to check:");
    scanf("%d", &num);  // Read input number
    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate sum of digits raised to power n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if number is Armstrong
    if ((int)result == num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}

