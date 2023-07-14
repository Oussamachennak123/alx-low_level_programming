#include<stdio.h>
#include<sdlib.h>
/**
 * For choose positive or negatie in c.
 * retun , and user if else  
 */
int main(void)
{
	int n;
	printf("Please entre your number to n:");
		scanf("%d",&n);
		if (n>=0)
			if (n>0)
				printf("is positive");
			else
				printf("is zero");
		else
			printf ("is negatif");

		return (0);
}

