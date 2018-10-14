#include <stdio.h>
#include <stdlib.h>

int main() {
	float sale,sa;
	int a = 200;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &sale);
	sa = 200 + sale * 0.09;
	printf("Salary is:%f",sa);
	printf("\n");
	system("pause");
	return 0;
}