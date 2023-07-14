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
		if (n=0)
		{
		print("is zero");
		}
		else if (n<0)
		{
			print("is negative");
		}
		else 
		{
			print("is positive");
		}
		return (0);
}
