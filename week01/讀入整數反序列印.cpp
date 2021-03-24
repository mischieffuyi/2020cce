#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	int x=a,y=b;
	while(b!=0){
		c=b;
		b=a%b;
		a=c;
	}

	printf("%d %d\n",x/a,y/a);
}
