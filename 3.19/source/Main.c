#include <stdio.h>
#include <stdlib.h>

int main() {
	float loan,ir,in;
	int lid;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &loan);
	printf("Enter interest rate:");
	scanf_s("%f", &ir);
	printf("Enter term of the loan in days:");
	scanf_s("%d", &lid);
	in = loan * ir * lid / 365;
	printf("The interest charge is :%f", in);
	printf("\n");
	system("pause");
	return 0;
}