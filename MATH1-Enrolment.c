#include <stdio.h>

int main(void) {
    int k;
    scanf("%d",&k);
while( k-- ) {
      int s , c ;
      scanf("%d%d",&s,&c);
      
      if( s >= c )
        printf("0\n");
        else 
            printf("%d\n",c-s);
}
	return 0;
}


