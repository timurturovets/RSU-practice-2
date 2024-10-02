#include <stdio.h>
#include <math.h>

int max_pow2(int a) {
	if (a == 0) return 0;
	
	a &= -a;

	int count = 0;

	while (a > 0) { // TODO - no loop
		a >>= 1;
		count++;
	}

	return pow(2, count - 1);
}

void task8() {
	int num, result;

	printf("Input a number: ");
	scanf_s("%d", &num);

	result = max_pow2(num);
	printf("Your number's biggest power of 2 divider: %d", result);
}