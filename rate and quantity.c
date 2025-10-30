#include<stdio.h>
int main()
{
	int qty;
	float rate,amt;
	printf("Enter quantity:");
	scanf("%d",&qty);
	printf("Enter rate:");
	scanf("%f",&rate);
	amt=rate*qty;
	printf("total amount is %f:",amt);
	printf("\n");
}

