#include <stdio.h>
#include <stdlib.h>

int main() {
	int hours;
	float rate, sa;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &hours);
	printf("Enter hourly rate of the worker ($00.00):");
	scanf_s("%f", &rate);
	if (hours <= 40) {
		sa = hours * rate;
	}
	else sa = 40 * rate + (hours - 40)*1.5;

	printf("Salary is:%f", sa);
	printf("\n");
	system("pause");
	return 0;
}