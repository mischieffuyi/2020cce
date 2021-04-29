#include <stdio.h>
char a[10000];
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets( a );

		printf("%s\n", a);
	}
}
