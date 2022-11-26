#include <stdio.h>

int main(void) {
	 int k;
	 scanf("%d",&k);
	 
while( k-- ) {
    int s,r,d;
    scanf("%d%d%d",&s,&r,&d);
    int total = r*1+d*2;
        if ( total <= s )
            printf("YES\n");
            else 
             printf("NO\n");
             
}
	return 0;
}


