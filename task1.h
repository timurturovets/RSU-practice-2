#include <stdio.h>

// This function calculates and returns the Least Significant Bit of a given number.
int LSB(int num) {
	return num & 1;
}

void task1() {
    int num;
    printf("Input a number: ");
    scanf_s("%d", &num);

    int lsb = LSB(num);
    printf("Least significant bit of %d: %d", num, lsb);
}