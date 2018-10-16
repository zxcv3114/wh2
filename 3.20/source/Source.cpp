#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a;
	float b;
	while (1) {
		printf("Enter # of hours worked(-1 to end):\n");
		scanf_s("%d", &a);
		printf("Enter hourly rate of the worker($00.00):\n");
		scanf_s("%f", &b);
		if (a > 40) { printf("Salary is $%f\n", ((a-40)*b*1.5)+400); }
		if (a <= 40) { printf("Salary is $%f\n", (a*b)); }
	}
	system("pause");
	return 0;

}