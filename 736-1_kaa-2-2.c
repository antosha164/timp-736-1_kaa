#include <stdio.h>
int main ()
{
	int n,i,ch;
	float res=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		scanf("%d",&ch);
		res=res+(i%2)*ch*ch;
	}
	printf("%f\n",res);
	return 0;
}
