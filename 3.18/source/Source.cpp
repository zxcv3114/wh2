#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a,b;
	while (1) {
		printf("Enter sales in dollars(-1 to end):\n");
		scanf_s("%f", &a);
		if (a == -1) { break; }
		b = a * 0.09 + 200;
			printf("Salary is :%.2f\n", b);
		
	}

	system("pause");
	return 0;
}