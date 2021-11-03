//programe to convert minutes into hours and minutes
#include<stdio.h>
void main()
{
	int minutes,hour,conversion;
	printf("enter the number of minutes :");
	scanf("%d",&minutes);
	hour = minutes/60;
	conversion = minutes%60;
	printf("%d hour(s) %d minute(s)",hour,conversion);
}
