// saitadikonda99 code chef problems

#include <stdio.h>

int main(void) {
	 int k;
	 scanf("%d",&k);
	 
while( k-- ) {
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    int need= b-a;
    int time= need/x;
    printf("%d\n",time);
}
	return 0;
}


