#include <stdio.h>
#include<math.h>

int main(void) {
	 int s;
	 scanf("%d",&s);
	 
while( s-- ) {
     int n,a,b,sum=0,number=0;
     scanf("%d%d%d",&n,&a,&b);
      
     
  for( int i=1;i<n;i++) {
       int power = pow( 2, i );
       if( power == n) {
           number = i;
           break;
       }
  }
       for( int i=1;i<=number;i++) {
           sum = sum + a + b;
           
       }
  printf("%d\n",sum-b);
}

return 0;
}


