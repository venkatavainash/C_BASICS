#include<stdio.h>
void main()
{
	int n,sum_of_natural_numbers;
	printf("enter the n value :");
	scanf("%d",&n);
	sum_of_natural_numbers = (n*(n+1))/2;
	printf("sum of first %d natural numbers is %d",n,sum_of_natural_numbers);
}
