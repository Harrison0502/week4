#include <stdio.h>
#include <stdlib.h>

int main(){
    int w,h,x,a=0;
    scanf("%d%d",&w,&h);
    x=w;
    for(int i=0;i<h;i++){//有h層生層先上半部(h-1)/2層
      if(i>(w-1))
        a++;
      for(int j=0;j<h;j++){
        if((j>=a&&j<w+i))
            printf("*");
        else if(j>=(h-(w+i))&&j<(h-a))
            printf("*");
        else
            printf(" ");
      }
      printf("\n");
        }
        }