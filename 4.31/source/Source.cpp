#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c=4, d, e=1;
	for (a = 1;a <= 9;a++) {
		for (b = 1;b <= c;b++) { printf(" "); }
		for (d = 1;d <= e;d++) { printf("*"); }
		   

		
		if (a >= 5) { c += 1;e -= 2; }
		if (a < 5) { c = c - 1;e += 2; }
		printf("\n");
	}
	system("pause");
	return 0;

}