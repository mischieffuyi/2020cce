#include <stdio.h>
int main ()
{
	char s[80];
	scanf("%s",&s);
	for(int i=0; s[i]; i++)
	{
		if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
		else if(s[i]>='a'&&s[i]<='z')s[i]-=32;

	}
		printf("%s\n",s);
}
