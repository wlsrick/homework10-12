#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c, d, e, f, g;
	int num;
	printf("�п�J�C�g�~��:");
	scanf_s("%f", &a);
	printf("�п�J�W�Z�ɼ�(�p��):");
	scanf_s("%f", &b);
	printf("�п�J���u��:");
	scanf_s("%f", &c);
	printf("�п�J�C�g���P��q:");
	scanf_s("%f", &d);
	printf("�п�J�C�󲣫~��o�����B:");
	scanf_s("%f", &e);
	printf("�п�J�C�g���X�󲣫~:");
	scanf_s("%f", &f);

	printf("�п�J�n�p�⪺�N��:");
	scanf_s("%d", &num);
	switch (num) {
	case 1:printf("�g�z�C�g���~��:%8.2f", a);
		break;
	case 2:if (b > 40) {
		g = (b - 40)*c*1.5 + 40 * c;
		printf("�u�H�C�g���~��:%8.2f\n", g);
	}
		   else {
		g = b * c;
		printf("�u�H�C�g���~��:%8.2f\n", g);
	}
		   break;
	case 3: g = 250 + 0.057*d;
		printf("�Ī��u�H�C�g���~��:%8.2f\n", g);
		break;
	case 4:g = f * e;
		printf("�u�@�H���C�g���~��:%8.2f\n", g);
		break;
	default:printf("���~\n");
	}
	system("pause");
	return 0;
}