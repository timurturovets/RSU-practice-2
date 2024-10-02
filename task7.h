#include <stdio.h>

int swap_bytes(int a, int i, int j) {
	i--; j--;
	int bytes[] = { 0x000000ff, 0x0000ff00, 0x00ff0000, 0xff000000 };

	int byte1 = (a & bytes[i]) >> (i * 8),
		byte2 = (a & bytes[j]) >> (j * 8);

	a = a & ((~bytes[i]));// << (i * 8));
	a = a & ((~bytes[j]));// << (j * 8));

	a = a | (byte1 << (j * 8));
	a = a | (byte2 << (i * 8));
	//printf("%d\n", a);
	return a;
}

void task7() {
	int num, i, j, result;

	printf("Input a number: ");
	scanf_s("%d", &num);

	printf("Input first byte's position: ");
	scanf_s("%d", &i);

	printf("Input second byte's position: ");
	scanf_s("%d", &j);

	result = swap_bytes(num, i, j);
	printf("Your number after swapping bytes: %d", result);
}