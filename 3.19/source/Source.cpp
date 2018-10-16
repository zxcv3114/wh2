#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b,c;
	
	while (1) {
		
		printf("Enter loan principal(-1 to end):\n");
		scanf_s("%f", &a);
		if (a == -1) { break; }
		printf("Enter interest rate:\n");
		scanf_s("%f", &b);
		printf("Enter term of the loan in day:\n");
		scanf_s("%f", &c);
		printf("The interest charge is $%f", (a*b*c/365));
		printf("\n");
	}

	system("pause");
	return 0;



}