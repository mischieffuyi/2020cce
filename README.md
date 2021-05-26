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

# 2021/3/4 試著使用指標 *p , 把變數n1 的值改掉
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

# 2021/3/4 試著使用指標 *p2 , 把變數n3 的值改掉
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    return 0;
}
```

# 2021/3/4 試著先 p2=p1, 然後 *p2=400, 再印出來。用小畫家畫它們的關係
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    return 0;
}
```

# 2021/3/4 現在改用陣列 int n[3]={10, 20, 30}, 再用指標, 去改裡面的值
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p=& n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p2=& n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    return 0;
}
```

# 2021/3/11 P
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main ()
{
    int *p= &a[2];
    *p = 222;

    p = p+2;
    *p = 666;
}

```

# 2021/3/11 P--
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
        for(int i=0; i<5; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
}
int main ()
{
    int *p= &a[2];
    *p = 222;
                printAll();

    p = p+2;
    *p = 666;
                printAll();

    p--;
    *p = 555;
                printAll();

}
```

# 2021/3/11 指標宣告
```C
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printAll()
{
        for(int i=0; i<10; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
}
int main ()
{
    int *p= &a[2];
    *p = 200;
    printAll();

    int *p2 = p+4;
    *p = 666;
    printAll();

    p2--;
    *p2 = 555;
    printAll();

    return 0;
}
```

# 2021/3/11 4malloc
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main (){
    int b[10];

    int *p = (int*) malloc( sizeof(int)*10 );
    return 0;

}
```

# 2021/4/8 字串排序-快速排序
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;

    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}

    qsort( line, n, sizeof(char[10]), compare);

    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}

```

# 2021/4/15 UVA10226
```C
#include <stdio.h>
#include <stdlib.h>


}
```

#UVA10420
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare( const void*p1, const void*p2)
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s", name[i]);
		gets( others );
	}	
	
	qsort( name, n, 80, compare);
	int ans=1;
	printf("%s ",name[0] );
	for(int i=0; i<n-1; i++){
		if( strcmp( name[i],name[i+1]) !=0){
			printf("%d\n",ans);
			printf("%s ",name[i+1] );
			ans=1;
		}else{
			ans++;
		}
	}
	printf("%d\n", ans);
}
```

#123
```
#include <stdio.h>
char line[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0; line[k]!=0; k++){
			char c = line[k];
			if( c>='A' && c<='Z') ans[ c-'A' ]++;
			else if(c>='a' && c<='z') ans[ c-'a' ]++;
		}
	}
	for(int i=0;i<26;i++){
		for(int j=i+1; j<26;j++){
			if( ans[i] < ans[j] || (ans[i]==ans[j] && alphabet[i]>alphabet[j]) ){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char c = alphabet[i];
				alphabet[i] = alphabet[j];
				alphabet[j] = c;
			}
		}
	}
	for(int i=0;i<26;i++){	
		if(ans[i]>0) printf("%c %d\n", alphabet[i], ans[i]);
	}
}
```

W12 告訴我頻率
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char ascii[256];
		for(int i=0;i<256;i++) ascii[i]=i;
		
		for(int i=0;line[i]!=0;i++){
			char c =line[i];
			ans[c]++;
		}
		
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if( ans[i] > ans[j] ){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if(ans[i] == ans[j] && ascii[i]<ascii[j] ){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;	
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```

W12 train swap
```C
#include <stdio.h>
int a[100];
int main()
{
	int T, N;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i] );
		}
		int ans=0;
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```

W12 SORT SORT SORT
```C
#include <stdio.h>
int a[10000];
void swap( int i, int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int N, M;
	while( scanf("%d %d",&N,&M)==2 ){
		for(int i=0;i<N;i++){
			scanf("%d",&a[i] );
		}
		
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if( a[i]%M > a[j]%M) swap(i,j); 
				if( a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2!=0 ) swap(i,j);
				if( a[i]%M==a[j]%M && a[i]%2!=0 && a[j]%2!=0 &&a[i]<a[j] ) swap(i,j);
				if( a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2==0 &&a[i]>a[j] ) swap(i,j);
			}
		}
		
		printf("%d %d\n",N,M);
		for(int i=0;i<N;i++){
			printf("%d\n",a[i]);
		}
	}
}

```

# W13-時間計時器
```C
void setup(){//開新的
  size(1024, 400);
  text( createFont("標楷體", 80) );
}
void draw(){
  background(#3E8DF7);//色碼
  int s = second();   //Value from 0 - 59
  int m = minute();   //Value from 0 - 59
  int h = hour();     //Value from 0 - 23
  textSize(80);
  text( h+":" + ":" + s , 100 , 200);
  int total = s + 60*m + 60*60*h;//現在總秒數
  int closeH=17, closeM=40, closeS=0;//下課的精確時間
  int total2=closeS + 60*closeM + 60*60closeH;//目標總秒數
  int ans = total2 - total;
  text( "剩下幾秒:" + ans , 100 , 100 );
  int ansH=ans/60/60%60, ansM=ans/60%60, ansS=ans%60;
  text( ansH + ":" + ansM + ":" + ansS , 100 , 300 );
  } //數字 字串 數字 字串 數字
```
