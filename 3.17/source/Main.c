#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num,bb,ch,cr,ac,cl,ba,Cl;

	printf("Enter account number(-1 to end):");
	scanf_s("%f", &num );
	printf("Enter beginning balance:");
	scanf_s("%f", &bb);
	printf("Enter total charges:");
	scanf_s("%f", &ch);
	printf("Enter total credits:");
	scanf_s("%f", &cr);
	printf("Enter credit limit:");
	scanf_s("%f", &cl);
	printf("Account:");
	scanf_s("%f", &ac);
	printf("Credit limit:");
	scanf_s("%f", &Cl);
	ba = bb + ch - cr;
	printf("Balance:%f",ba);
	printf("\n");
	if (ba > Cl) {
		printf("Credit Limit Exceeded.\n");
	}
	system("pause");
	return 0;

}