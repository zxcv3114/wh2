#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b, c;
	printf("��J����:\n");
	scanf_s("%f", &a);
	printf("��J���:\n");
	scanf_s("%f", &b);
	printf("��J���:\n");
	scanf_s("%f", &c);
	if (a*a == b * b + c * c) {
		printf("���T���ά������T����");

	}
	else  printf("�D�����T����");
	if (a > 500) { printf("�w�W�L�d��"); }

	system("pause");
	return 0;

}