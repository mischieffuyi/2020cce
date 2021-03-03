#include <stdio.h>
int a[10];
int main ()
{
	int n=0;
	for(int i=1;i<=10;i++){
		scanf("%d", &a[i]);
		if(a[i]%3==0)
		n++;
	}
	printf("%d\n",n);
}
