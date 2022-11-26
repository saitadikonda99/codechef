#include <stdio.h>

int main(void) {
       int s;
       scanf("%d",&s);
       
while( s-- ) {
    int k,r,d;
    scanf("%d%d%d",&k,&r,&d); 
        if ( d < r && d >=k ) 
            printf("YES\n");
            else 
                printf("NO\n");
    }
	return 0;
}


