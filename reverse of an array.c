#include<stdio.h>
int main()
{
int arr[10],i;
for(i=0;i<10;i++)
{
printf("Enter an array  element at  %d\n:",i);
scanf("%d",&arr[i]);}
		for(i=9;i>=0;i--)
	printf("reverse of %d is %d\n\n",i,arr[i]);
}
