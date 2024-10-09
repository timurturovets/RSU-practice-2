#include <stdio.h>
#include <math.h>

#define lshift(x, len, n) \
	int byte, i; \
	for (i = 0; i < n; i++) { \
		byte = ((1 << (len - 1)) & x) >> (len - 1); \
		x &= ~(1 << (len - 1)); \
		x <<= 1; \
		x |= byte; \
	} 

#define rshift(x, len, n) \
	int byte, i; \
	for (i = 0; i < n; i++) { \
		byte = x & 1; \
		x >>= 1; \
		x |= (byte << (len - 1)); \
	}

void task10() {
	int num, len, choice, n;

	printf("Input your number: ");
	scanf_s("%d", &num);

	printf("Input length of your number in binary representation: ");
	scanf_s("%d", &len);
	
	printf("\n1 - right shift\n2 - left shift\nYour choice: ");
	scanf_s("%d", &choice);
	if (choice != 1 && choice != 2) {
		printf("Invalid input value");
		return;
	}

	printf("Input shift size: ");
	scanf_s("%d", &n);

	if (choice == 1) {
		rshift(num, len, n);
	}
	else {
		lshift(num, len, n);
	}
	printf("Your number after shifting: %d", num);
}