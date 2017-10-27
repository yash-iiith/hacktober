#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,p,d=0,flag=0;
	scanf("\n%d",&n);
	scanf("\n%d",&p);
	while(n>1)
	{
		d=n%p;
		n=n/p;
	if(d==0)
		{
			n=n/p;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nPower");
	}
	else
	{
		printf("\nNot Power");
	}
	system("pause");
	return 0;
}
