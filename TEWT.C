#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<n;i++){
if(i>1)
for(j=1;j<i;j++)
printf(" ");
printf("*");
for(j=1;j<=2*(n-i)-1;j++)
printf(" ");
printf("*");
printf("\n");
}
for(i=1;i<=2;i++){
for(j=1;j<=n-i;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
}
for(i=3;i<=n;i++){
for(j=1;j<=n-i;j++)
printf(" ");
printf("* ");
for(j=2;j<i;j++)
printf(" ");
printf("*\n");
}
return 0;
}