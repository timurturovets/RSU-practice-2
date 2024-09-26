#include <stdio.h>

int swap_bits(int num, int i, int j) {
	if (i > j) {
		int _ = i;
		i = j;
		j = _;
	}

	int bit1 = (num & (1 << i)) >> i;
	int bit2 = (num & (1 << j)) >> j;
	num = (num & ~(1 << i)) & ~(1 << j);
	num = (num | (bit1 << j)) | (bit2 << i);
	return num;
}

void task5() {
	int a, i, j;

	printf("Input a number: ");
	scanf_s("%d", &a);

	printf("Input first bit position: ");
	scanf_s("%d", &i);

	printf("Input second bit position: ");
	scanf_s("%d", &j);

	int num = swap_bits(a, i, j);
	printf("Number after modification: %d", num);
}