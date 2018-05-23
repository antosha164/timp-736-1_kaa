#include <stdio.h>
int main ()
{
	int n,i,ch;
	int res=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ch);
		if(ch>0) res++;
	}
	printf("%d\n",res);
	return 0;
}
	
