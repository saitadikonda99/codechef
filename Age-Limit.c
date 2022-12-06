#include <stdio.h>

int main(void) {
	 int k;
	 scanf ("%d",&k);

while(k-- ) {  
        int c,o,m;
        scanf("%d%d%d",&c,&o,&m);
           if(c <= m && m<o )
                printf("YES\n");
                else 
                    printf("NO\n");
}
	return 0;
}


