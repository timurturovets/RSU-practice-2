#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int get_bit(int num, int k) {
	int bit = 1 << k;
	int result = (num & bit) >> k;
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