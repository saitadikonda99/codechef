#include <stdio.h>

int main(void) {
	 int k;
	 scanf("%d",&k);
while( k-- ) {
     int x,y;
     scanf("%d%d",&x,&y);
     if( x>y) {
         int press = x-y;
         printf("%d\n",press);
           }
           else {
               int press = y -x;
                printf("%d\n",press);
           }
}

           return 0;
}


