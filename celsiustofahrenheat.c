// programe to convert celsius to fahrenheit
#include<stdio.h>
void main()
{
	int celsius,fahrenheat;
	printf("enter the temperature :");
	scanf("%d",&celsius);
	fahrenheat = (celsius*(9*1.0/5))+32;
	printf("fahrenheat = %d",fahrenheat);
}
