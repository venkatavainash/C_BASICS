//programe for to convert hour to minutes
#include<stdio.h>
void main()
{
	int hour,minutes,conversion;
	printf("enter the hour :");
	scanf("%d",&hour);
	printf("enter the minutes :");
	scanf("%d",&minutes);
	conversion = (hour*60)+minutes;
	printf("%d minutes",conversion);
	
}
