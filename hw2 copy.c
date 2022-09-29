#include <stdio.h>
#include <stdlib.h>

int main(){
    int w,h,x,a=0;
    scanf("%d%d",&w,&h);
    for(int i=1;i<=(h-1)/2;i++){//有h層生層先上半部(h-1)/2層
        x=w+i-1;//輸入星星的前後x個
        if(i>w)
            a++;//w排後左右空白
        for(int j=1;j<=h;j++){
            if(j<=x&&j>a)
                printf("*");
            else if(j>=(h-x)&&(h-a)>j)
                printf("*");
            else
                printf(" ");
            }
            printf("\n");
        }
        }
