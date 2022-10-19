 #include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    float x,y,per=0;
	     scanf("%d%d",&x,&y);
	      per=(y/x)*100;
	     
	     if(per>=50)
	     printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

