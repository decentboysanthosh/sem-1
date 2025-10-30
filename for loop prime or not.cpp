#include<stdio.h>
int main()
{
	int n,f,i;
	printf("Enter a num:");
	scanf("%d",&n);
    f=0;
    for(i=1;i<=n;i++)
{
	if(n%i==0)
	{f=f+1;
	}if(f==2)
	{printf("Not Prime no");
	}else{printf("Prime");
	}
}
return 0;
}
