
#include <stdio.h>
int main()
{
	int n,x,y;///n¬O¤½¤Ø¼Æ
	scanf("%d",&n);
	x=(n-2000)/500;
	if(n<=2000) printf("100\n");
	else if((n-2000)%500!=0){
		x++;
		y=100+x*5;
		printf("%d\n",y);
	}
}
