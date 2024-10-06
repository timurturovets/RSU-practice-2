#include <stdio.h>
#include <math.h>

int bits_in_between(int num, int i, int len) {
	int aux = 0, p = 0, j;

	for(j = 0; j < len - i; j++) {
		aux += pow(2, p);
		p++;
	}

	num &= aux;
	num >>= i;

	printf("num1: %d\n", num);
	return num;
}

void task11b() {
	int num, i, len, result;

	printf("Input your number: ");
	scanf_s("%d", &num);

	printf("Input quantity of bits: ");
	scanf_s("%d", &i);

	printf("Input length of your number in binary representation: ");
	scanf_s("%d", &len);

	result = bits_in_between(num, i, len);
	printf("Bits between %d first bits and last %d bits: %d", i, i, result);
}