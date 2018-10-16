#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b, c;
	printf("輸入斜邊:\n");
	scanf_s("%f", &a);
	printf("輸入邊長:\n");
	scanf_s("%f", &b);
	printf("輸入邊長:\n");
	scanf_s("%f", &c);
	if (a*a == b * b + c * c) {
		printf("此三角形為直角三角形");

	}
	else  printf("非直角三角形");
	if (a > 500) { printf("已超過範圍"); }

	system("pause");
	return 0;

}