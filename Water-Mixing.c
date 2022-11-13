#include <stdio.h>

int main(void) {
	int k;
	scanf("%d",&k);
    while(k--) {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
    int low=a-b;
    int high=b-a;
            if( a<b ) {
                if( high<=c)
                printf("YES\n");
                else 
                printf("NO\n");
        }
            else if( a>b ) {
            if( low<=d)
            printf("YES\n");
            else
            printf("NO\n");
        }
    else if(a==b)
    printf("YES\n");
    else 
    printf("NO\n");

 }
    return 0;
 }
    


