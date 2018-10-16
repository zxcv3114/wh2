#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a;
	
	printf("輸入本金:");
	scanf_s("%d", &a);
	printf("\n");
	printf("第1年%f",a*1.1);
	printf("\n");
	printf("第2年%f", a*1.105);
	printf("\n");
	printf("第3年%f", a*1.11);
	printf("\n");
	printf("第4年%f", a*1.115);
	printf("\n");
	printf("第5年%f", a*1.12);
	printf("\n");
	printf("第6年%f", a*1.125);
	printf("\n");
	printf("第7年%f", a*1.13);
	printf("\n");
	printf("第8年%f", a*1.135);
	printf("\n");
	printf("第9年%f", a*1.14);
	printf("\n");
	printf("第10年%f", a*1.145);
	printf("\n");
	printf("第11年%f", a*1.15);
	printf("\n");
	printf("第12年%f", a*1.155);
	printf("\n");
	printf("第13年%f", a*1.16);
	printf("\n");
	printf("第14年%f", a*1.165);
	printf("\n");
	printf("第15年%f", a*1.17);

	system("pause");
	return 0;

}