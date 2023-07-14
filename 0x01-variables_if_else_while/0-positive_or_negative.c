#include<stdio.h>
#include<time.h>
/**
 * For choose positive or negatie in c.
 * retun , and user if else  
 */
int main(void)
{
	int n;
	printf("Please entre your number to n:");
		scanf("%d",&n);
			if (n > 0) 
			{
		printf("is positif");
			}
		       	else if (n == 0) 
			{
		printf("is zero");
			}
		     	else {
		printf("is négatif");
			}

	printf("\n");

	return 0;
}
