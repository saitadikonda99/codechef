#include <stdio.h>

int main(void) {
	int s;
	scanf("%d",&s);
while ( s-- ) {
     int k,t;
     scanf("%d%d",&k,&t);
     int rem = k*7-t;
     printf("%d\n",rem);
     
}
	return 0;
}


