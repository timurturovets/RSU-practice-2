#include <stdio.h>

int xorify(int num) {
	int count = 0;
	while (num > 0) {
		if (num & 1) count++;
		num >>= 1;
	}
	return count % 2 == 0 ? 0 : 1;
}

void task9() {
	int num, result;

	printf("Input your number: ");
	scanf_s("%d", &num);

	result = xorify(num);
	printf("Your number after xorifying every bit: %d", result);
}