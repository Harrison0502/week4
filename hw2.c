#include <stdio.h>
#include <stdlib.h>

int main(){
    int w,h,x,a=0;
    scanf("%d%d",&w,&h);
    for(int i=1;i<=(h+1)/2;i++){//有h層生層先上半部(h-1)/2層
        x=w+i-1;
        if(i>w)
            a++;//w排後左右空白
        if(i=(h+1)/2){
            int mid;
            mid=(h-(2*w-1)/2);
            for(int m=1;m<=h;m++){
                if(m>mid&&m<=(h-mid))
                    printf("*");
                else
                    printf(" ");
             }
            printf("\n");
        }
        else if(i<(h+1)/2){
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
        else if(i>(h+1)/2){
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
    


}