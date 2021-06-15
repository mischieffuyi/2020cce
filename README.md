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

# W14-洗牌
```C
int []a = new int[47];//Java的陣列
//int []a={1,2,3,4,5,6,7,8,9....45,46};
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++) a[i] = i;
  //讓a[i]的陣列裡， 先要放齊對應的數字
  for(int i=0; i<1000; i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊，先洗好牌，先知道得號碼，等下再掉出來
}
int N=0;
void draw(){
  background(#23CBA0);
  textAlign(CENTER,CENTER);//文字對齊:中、中
  for(int i=0;i<N;i++){
    fill(255);ellipse(    i*80+40, 100, 55,55);
    fill(0);  text( a[i], i*80+40, 100);
  }
}
void mousePressed(){
  N++;
}
```

# W16-step01-1_畫出圓盤,用ellipse(圓心x,y, 寬,高) 配合void setup()及void draw()還有background()
```C
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  ellipse(50,50,80,80);
}
```

# W16-step01-2_畫出圓弧arc,參與很像ellipse()的圓心、寬高,但多了2個不明參數,我們利用fill()不同色彩來看結果,並利用mouseX來算出一個magic number
```C
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    圓心  寬，高
  fill(255,0,0);
  float stop=mouseX/50.0;
  text( stop, 100,100 );//畫數字
  arc(50,50, 80,80, 0, stop);//畫出 圓弧
}//   圓心   寬,高 開始 結束
```

# W16-step01-3_嘗試arc()的參數,重點在了解 start 的意思,它可以讓圓弧轉動
```C
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    圓心  寬，高
  fill(255,0,0);
  float start=mouseX/50.0;
  textSize(40);
  text( start, 100,100);
  arc(50,50, 80,80, 0+start, 0.1+start);//畫出 圓弧
}//   圓心   寬,高 開始 結束
```

# W16-step02-1_利用for迴圈,來畫出24片細細的小片,換算出角度,換算出shift位移量,再利用餘數來決定色彩,完成會轉動的大轉盤
```C
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    圓心  寬，高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FFF86C);
    if(i%3==2) fill(255);
    arc(50,50, 80,80, 0+start, 0.1+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
```

# W16-step02-2_利用if(i==0)來挑出最前面的i,把它設成橘色
```C
void setup(){//設定，只做一次
  size(400,200);
}
float start=0;
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  if(start<10) start+=0.1;//float start=mouseX/50.0;
  fill(255);  text( start, 200,150);
  for(int i=0; i<24; i++){
    float shift=i*PI/12;
    if(i%3==0) fill(#000000);
    if(i%3==1) fill(#FFF86C);
    if(i%3==2) fill(#FFFFFF);
    if(i==0) fill(#FA761E);
    arc(100,100, 180,180, start+0+start, start+PI/12+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
```

# W16-step02-3_我們改利用外面的global變數float start=0,再於draw()裡,if(start比10小)start+=0.01來讓它轉動
```C
void setup(){//設定，只做一次
  size(400,200);
}
float start=0;
void draw(){//畫，每秒畫60次
  background(#0C33C9); text(start,200,150);
  ellipse(100,100,180,180);
  fill(#FDFF90);
  if(start<10) start+=0.01;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FF90FA);
    if(i%3==2) fill(#FF9099);
    if(i==0) fill(#AD90FF);
    arc(100,100, 180,180, shift+0+start,shift+PI/12+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
```

# W16-step03-1_利用速度v來讓start位置會改變, 只要速度夠快,就繼續轉 start += v;  v變0.99倍
```C
void setup(){//設定，只做一次
  size(400,200);
}
float start=0, v=0.07;
void draw(){//畫，每秒畫60次
  background(#90FFFC);
  if(v>0.001){
    start += v;
    v *= 0.99;
  }
  fill(255); text(start,200,150); text(v,200,170);
  ellipse(100,100, 180,180);
  fill(#FDFF90);
  //if(start<10) start+=0.01;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FF90FA);
    if(i%3==2) fill(#FF9099);
    if(i==0) fill(#AD90FF);
    arc(100,100, 180,180, shift+0+start,shift+PI/12+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
```

# W16-step03-2_為了讓每次轉動都有變化,我們在mousePressed()裡,利用random()亂數來決定一開始的速度,速度不同,轉動的結果就會不同
```C
void setup(){//設定，只做一次
  size(400,200);
}
float start=0, v=0.07;
void draw(){//畫，每秒畫60次
  background(#90FFFC);
  if(v>0.001){
    start += v;
    v *= 0.99;
  }
  fill(255); text(start,200,150); text(v,200,170);
  ellipse(100,100, 180,180);
  fill(#FDFF90);
  //if(start<10) start+=0.01;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FF90FA);
    if(i%3==2) fill(#FF9099);
    if(i==0) fill(#AD90FF);
    arc(100,100, 180,180, shift+0+start,shift+PI/12+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
void mousePressed(){
  v = random(1);
}
```
