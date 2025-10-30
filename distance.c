#include<stdio.h>
main()
{
	float a,u,t,d;
	printf("Enter accelaration:");
	scanf("%f",&a);
	printf("Enter initial velocity:");
	scanf("%f",&u);
	printf("Enter time :");
	scanf("%f",&t);
	d=u*t+(a*t*t)/2;
	printf(" total distance:%f \n",d);
	return 0;
}
