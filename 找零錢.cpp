#include <stdio.h>
int main( )
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/50;
	b=n%50/5;
	c=n%50%5/1;

	printf("%d=50*%d+5*%d+1*%d\n",n,a,b,c);
}
