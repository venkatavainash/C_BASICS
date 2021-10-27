// calculating the volume of the cylinder

#include<stdio.h>	 //headerfile declaration
int main()			 //main function.
{		
	float volume_of_cylinder,r,h;	//declaration of variables
	printf("enter the value of r "); //taking input
	scanf("%f",&r);
	printf("enter the value of h");
	scanf("%f",&h);
	volume_of_cylinder = (22*r*r*h)/7; //formula
	printf("Volume of the Cylinder : %f\n",volume_of_cylinder); //output of the programe
	return 0;
}
