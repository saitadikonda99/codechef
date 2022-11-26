#include <stdio.h>

int main(void) {
 int s;
 scanf("%d",&s);
    while( s-- ) {
         int k;
         scanf("%d",&k);
         if( k < 7 ) 
            printf("YES\n");
            else 
                printf("NO\n");
    }
	return 0;
}


