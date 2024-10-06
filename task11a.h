#include <stdio.h>
#include <math.h>

int glue_bits(int num, int len, int i) {
	printf("num %d, len %d, i %d\n", num, len, i);
	int j, p = 0, result;
	int bits1 = num >> (len - i);
	int bits2 = 0;
	for (j = 0; j < i; j++) {
		bits2 += pow(2, p);
		p++;
	}
	bits2 &= num;
	
	result = (bits1 << i) | bits2;
	return result;
}

void task11a() {
	int num, len, i, result;

	printf("Input your number: ");
	scanf_s("%d", &num);

	printf("Input quantity of bits: ");
	scanf_s("%d", &i);

	printf("Input length of your number in binary representation: ");
	scanf_s("%d", &len);

	result = glue_bits(num, len, i);
	printf("Your number after gluing first %d bits and last %d bits: %d", i, i, result);
}