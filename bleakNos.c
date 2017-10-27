#include <stdio.h>
#include<stdlib.h>
int main() {
	//code
	int n,x,d,a[10],i,j,count=0,ans;
	scanf("%d\n",&n);
	scanf("%d\n",&x);
	i=9;
	while(x>0)
	{
	    d=x%2;
	    a[i]=d;
	    i--;
	    x=x/10;
	}
	for(j=0;j<i;j++)
	{
	   a[j]=0; 
	}
	for(i=0;i<9;i++)
	{
	    if(a[i]==1)
	    {
	        count+=1;
	    }
	    i++;
	}
	if(x+count == n)
	{
	    ans=0;
	    printf("%d",ans);
	}
	else
	{
	    ans=1;
	    printf("%d",ans);
	}
	system("pause");
	return 0;
}
