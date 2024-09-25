#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// This functions returns the bit at the given position in the number.
int get_bit(int num, int pos) {
	int bit = 1 << pos;
	int result = (num & bit) >> pos;
	return result;
}

void task2() {
	int num, pos, bit;

	printf("Input a number: ");
	scanf_s("%d", &num);
	
	printf("Input the bit position (counting from the right): ");
	scanf_s("%d", &pos);
	
	bit = get_bit(num, pos);
	printf("Bit at position %d of number %d: %d", pos, num, bit);
}