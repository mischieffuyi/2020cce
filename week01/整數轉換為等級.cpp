#include <stdio.h>
int main ()
{
	int n,A,B,C,F;
	scanf("%d",&n);
	if( n>=90 ) printf("A\n");
	else if( n< 90 && n>=80) printf("B\n");
	else if( n< 80 && n>=60) printf("C\n");
	else printf("F\n");
}
