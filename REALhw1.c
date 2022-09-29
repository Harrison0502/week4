#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int num;
        scanf("%d",&num);
        if(num==1)
         printf("NO\n");
        else{
            int b=0;
            for(int j=2;j*j<=num;j++){
                if(num%j==0)
                 b++;
            }
        if(b==0)
          printf("YES\n");
        else
          printf("NO\n");
        }
    }
     

}