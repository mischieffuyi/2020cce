
#include <stdio.h>
int main()
{
	int n,x=0,m=1;
	scanf("%d",&n);
	for(int i=1;i<=4;i++){
		x+=n%10*m;
		n/=10;
		m*=2;
	}
	printf("%d\n",x);
}
