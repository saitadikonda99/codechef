#include <stdio.h>

int main(void) {
 int k;
 scanf("%d",&k);
   while( k-- ) {
       int s1, s2,s3;
       scanf("%d%d%d",&s1,&s2,&s3);
       if ( s1 > s2 && s1 >s3 ) {
           if ( s2 > s3 )
            printf("%d\n",s2);
            else 
                printf("%d\n",s3);
                
       }
   else if ( s2 > s3 && s2 > s1 ) {
         if ( s3 > s1 )
            printf("%d\n",s3);
            else 
            printf("%d\n", s1);
   }
    else {
        if ( s2 > s1 )
            printf("%d\n",s2);
            else 
                printf("%d\n",s1);
                
    }
   }
	return 0; 
}


