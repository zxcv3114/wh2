#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a, b, c=1;
	printf("(A)\n");
	for (a = 1;a <= 10;a++) {
		for (b = 1;b <= c;b++) {
			printf("*");
		
		}
		c = c + 1;
		printf("\n");
	}
	
	printf("(B)\n");
	int d, e, f=10;
	for (d = 1;d <= 10;d++) {
		for (e = 1;e <= f;e++) {
			printf("*");
		}	
		f = f - 1;
		printf("\n");
	}
	printf("(C)\n");
	int g, h, i=0,j,k=10;
	for (g = 1;g <= 10;g++) {
		for (h = 1;h <= i;h++) {
			printf(" ");
		}
		for (j = 1;j <=k ;j++) {
			printf("*");
		}
		





		k = k - 1;
		i = i + 1;
		printf("\n");
	}
	printf("(D)\n");
	int m, p, u=10 , z, x=1 ;
	for (m = 1;m<= 10;m++) {
		for (p = 1;p <= u;p++) {
			printf(" ");
		}
		for (z = 1;z <= x;z++) {
			printf("*");
		}





		u = u - 1;
		x = x + 1;
		
		printf("\n");
	}

		


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;


	}