#include<stdio.h>
#include<stdlib.h>
int main(void) {
	
	   float a,b,c,d,e;
	   while (1) {


		   printf("Enter account number(-1 to end):\n");

		   scanf_s("%f", &a);
		   if (a == -1) {
			   break;
		   }
		   
		   
		   printf("Enter beginning balance:\n");
		   scanf_s("%f", &b);
		   printf("Enter total charges:\n");
		   scanf_s("%f", &c);
		   printf("Enter total credits:\n");
		   scanf_s("%f", &d);
		   printf("Enter credit limit:\n");
		   scanf_s("%f", &e);


		   if ((c - d + b) >= e) {
			   printf("Account:%f\n", a);
			   printf("Credit limit:%f\n", (c - d + b));
			   printf("Blance:%f\n", e);
			   printf("Credit Limit Exceeded.");
			   printf("\n");
		   }
		   
		   
		   
	   }

		system("pause");
		return 0;

	}






