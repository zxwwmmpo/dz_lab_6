#include <stdio.h>
#include <windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, n;
	printf("n = ");
	scanf_s("%d", &n);
	i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= n);
}