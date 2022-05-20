//to check an armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,p=0,r;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	p=p+pow(r,3);
	n=n/10;
	}
	if (n==p)
	printf("Armstrong number");
	else
	printf("Not an Armstrong number");
}