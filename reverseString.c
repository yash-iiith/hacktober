#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,k,x=0,len=0,l=0;
		char a[2020];
		scanf("%s",&a);
		len=strlen(a);
		i=len-1;
		j=len;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]=='.')
			{
				x=j+1;
				for(k=x;k<=i;k++)
				
					printf("%c",a[k]);
					printf("%c",a[j]);
					i=j-1;
				
		}
			else if(j==0)
			{
				l=j;
				while(l<=i)
				{
					printf("%c",a[l]);
					l++;
				}
			}
		}
		printf("\n");
		system("pause");
		return 0;
	}
}
