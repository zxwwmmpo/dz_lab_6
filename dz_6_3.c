#include <stdio.h>
#include <windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������� n ����� �� ����� a
	int n, k, a, i;
	printf("������� n � a: ");
	scanf_s("%d %d", &n, &a);
	k = 1;
	i = a + 1;
	do {
		printf("%d ", i);
		i++;
		k++;
	} while (k <= n);
}