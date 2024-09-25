#include <stdio.h>

// This functions changes the bit at the desired position in the number, then returns its modified version. 
// "flag" argument indicates whether the bit should be set (flag =/= 0) or reset (flag == 0).
int change_bit(int num, int pos, int flag) {
	int bit = 1 << pos;
	if (flag) {
		num |= bit;
	}
	else {
		num &= (~bit);
	}
	return num;
}

void tasks3_4() {
	int num, pos, flag;

	printf("Input a number: ");
	scanf_s("%d", &num);

	printf("Input the bit position: ");
	scanf_s("%d", &pos);

	printf("Should the bit be set or reset?\n1 - set\t0 - reset: ");
	scanf_s("%d", &flag);

	num = change_bit(num, pos, flag);
	printf("Number after modification: %d", num);
}