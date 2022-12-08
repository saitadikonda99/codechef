#include <stdio.h>

int main(void) {
   int t;
   scanf("%d",&t);
 
while(t--) {
    int s , r;
    scanf("%d%d",&s,&r);
    if( s > r ) 
     printf("LOSS\n");
     else if( s < r)
     printf("PROFIT\n");
     else
     printf("NEUTRAL\n");
}
	return 0;
}


