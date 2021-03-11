#include <stdio.h>
int main()
{
	int n,a[10];
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
