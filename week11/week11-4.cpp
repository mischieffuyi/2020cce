#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            �ন�u�r�ꪺ���Сv


}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//�}�Y
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//����
			printf("%s ", name[i+1] );//�s���}�Y
			ans=1;
		}
	}
	printf("%d\n", ans );//����
}
