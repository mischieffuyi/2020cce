#include <stdio.h>
int main ()
{
	int n,t=0;///t¬O²°¤l
	scanf("%d",&n);

	for(int i=1;i<n;i++){
		int x;
		x=i*(i+1);
		t+=x;
	}
	printf("%d\n",t);
}
