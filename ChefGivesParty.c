#include<stdio.h>
    void ChefGivesParty( int k ,int c , int t ) {
            if( k*c <= t ) 
                printf("yes\n");
                else 
                    printf("no\n");
}
 int main() {
        int e;
        scanf("%d",&e);
      while(e--) {
      int k,c,z;
      scanf("%d%d%d",&k,&c,&z);
      ChefGivesParty(k , c , z);
      }
      return 0;
 }
 
