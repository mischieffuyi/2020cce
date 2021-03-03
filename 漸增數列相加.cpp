#include <stdio.h>
int main ()
{
	int n,ans=0;
	scanf("%d",%n);
	for(int i=n;i>=1;i--)
	{
		ans=ans+i*(i-1);
	}
	printf("%d\n",ans);
}
