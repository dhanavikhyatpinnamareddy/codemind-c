#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    scanf("%d",&n);
    printf("%d %d ",a,b);
   
    for(i=3;i<=n;i++){
          c=a+b;
         a=b;
        b=c;
        printf("%d ",c);
    }
}