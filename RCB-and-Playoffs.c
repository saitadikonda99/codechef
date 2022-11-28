#include <stdio.h>

int main(void) {
        int k;
        scanf("%d",&k);
    while( k-- ) {
        int s,t,c;
        scanf("%d%d%d",&s,&t,&c);
     if( s + c*2 >= t)
        printf("YES\n");
          else 
             printf("NO\n");
    }
	return 0;
}


