#include <stdio.h>

int main(void) {
  int t;
  scanf("%d",&t);
  while(t--) {
  int a,b;
  scanf("%d %d",&a,&b);
      if(a>0 && b>0) 
      printf("Solution\n");
     
      else if(b==0) 
      printf("Solid\n");
      
      else 
      printf("Liquid\n");
      
  }
	return 0;


}
