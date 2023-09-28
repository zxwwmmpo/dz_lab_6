#include <stdio.h>
#include <windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//вывести n чисел от числа a
	int n, k, a, i;
	printf("введите n и a: ");
	scanf_s("%d %d", &n, &a);
	k = 1;
	i = a + 1;
	do {
		printf("%d ", i);
		i++;
		k++;
	} while (k <= n);
}