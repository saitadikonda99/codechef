#include <stdio.h>

int main(void) {
 int t;
 scanf("%d",&t);
 while(t--) {
     int income;
     scanf("%d",&income);
     if(income>100)
     printf("%d\n",income-10);
     else 
         printf("%d\n",income);
 }
	return 0;
}


