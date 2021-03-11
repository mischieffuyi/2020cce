#include <stdio.h>
int main()
{
	int a,b,c,t=0;
	scanf("%d%d%d",&a,&b,&c);

	if(c>b){
		t=b;
		b=c;
		c=t;
	}
	if(c>a){
		t=c;
		c=a;
		a=t;
	}
	if(b>a){
		t=b;
		b=a;
		a=t;
	}
	printf("%d\n",a-c);
}
