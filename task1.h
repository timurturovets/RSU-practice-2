#include <stdio.h>

// This function calculates and returns the Least Significant Bit of a given number.
int LSB(int num) {
	return num & 1;
}