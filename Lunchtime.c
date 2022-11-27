#include <stdio.h>

int main(void) {
	 int k;
	 scanf("%d",&k);
	 
while ( k-- ) {
     float time;
     scanf("%f",&time);
     if ( time <= 4 && time >=1  )
        printf("YES\n");
        else 
            printf("NO\n");
}
	return 0;
}


