#include <stdio.h>
#include <math.h>
#include <windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, n, k;
	printf("введите кол-во чисел n = ");
	scanf_s("%d", &n);
	i = 2;
	k = 1;
	do {
		printf("%d ", i);
		i += 2;
		k++;
	} while (k <= n);
}