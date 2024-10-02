#include <stdio.h>

int drop_bits(int a, int k) {
	int b = ~(0 < (32 - k)) << (k - 1);
	printf("%d\n", b);
	return a & b;
}

void task6() {
	int num, k, result;

	printf("Input a number: ");
	scanf_s("%d", &num);

	printf("Input quantity of bits needed to be dropped: ");
	scanf_s("%d", &k);

	result = drop_bits(num, k);
	printf("Number after dropping %d smallest bits: %d", k, result);
}

//16 - 11111	
// 17 - 1000
//8 - 100
//111111111000