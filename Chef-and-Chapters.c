#include <stdio.h>

int main(void) {
     int k;
     scanf("%d",&k);

while ( k-- ) {
      int s , t , c;
      scanf("%d%d%d",&s,&t,&c);
        int units = t*s;
        int chap = units * c;
        printf("%d\n",chap);
}
	return 0;
}


