#include<stdio.h>
#include<sdlib.h>
/**
 * For choose positive or negatie in c.
 * retun :0 
 */
int main(void)
{
	float n;
	printf("Please entre your number to n:");
		scanf("%f",&n);
		if (n==0)
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
