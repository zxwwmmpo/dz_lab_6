#include <stdio.h>
#include <windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int stepen, i;
	i = 0;
	stepen = 1;
	do {
		printf("2^%d = %d\n", i, stepen);
		i++;
		stepen = pow(2, i);
	} while (i <= 5);
}