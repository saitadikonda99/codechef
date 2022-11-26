#include <stdio.h>

int main(void) {
	 int k;
	 scanf("%d",&k);

while( k-- ) {
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
if( s1 > s2+s3 ||   s2 > s1+s3  || s3 > s2+s1  )
    printf("YES\n");
    else 
    printf("NO\n");
}
	return 0;
}


