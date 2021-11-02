#include<stdio.h>
void main()
{
	int a,b,s,diff,m;
	float did,module;
	a = 11;
	b = 2;
	
	s = a+b;
	diff = a-b;
	m = a*b;
	did = a*1.0/b;
	module = a%b;
	printf("sum of %d and %d is %d\n",a,b,s);
	printf("difference of %d and %d is %d\n",a,b,diff);
	printf("multiplicatin of %d and %d is %d\n",a,b,m);
	printf("division of %d and %d is %f\n",a,b,did);
    printf("module of %d and %d is %f\n",a,b,module);
	
}
