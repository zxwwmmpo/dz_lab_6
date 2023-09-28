#include <stdio.h>
#include <windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k, i, n, a;
	printf("введите n и a: ");
	scanf_s("%d %d", &n, &a);
	i = a;
	k = 1;
	do {
		printf("%d ", i);
		i += a;
		k++;
	} while (k <= n);
}