# 基礎題:找零錢
```C
#include <stdio.h>
int main( ) 
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/50;
	b=n%50/5;
	c=n%50%5/1;
	
	printf("%d=50*%d+5*%d+1*%d\n",n,a,b,c);
}
```

# 基礎題：因數個數 
```C
#include <stdio.h>
int main( ) 
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/50;
	b=n%50/5;
	c=n%50%5/1;
	
	printf("%d=50*%d+5*%d+1*%d\n",n,a,b,c);
}
```

# 基礎題：找倍數 
```C
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
```

# 基礎題：整數轉換為等級 
```C
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
```

# 進階題：分式化簡 
```C
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
```

# 進階題：讀入整數反序列印
```C
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
```

# 進階題：A的B次方函數 
```C
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans*=a;
	}
	return ans;
}
int main (void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

```

# 進階題：漸增數列相加 
```C
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
```

# 2021/3/4 01
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    return 0;
}
```
