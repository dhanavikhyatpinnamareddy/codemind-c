#include<stdio.h>
int main()
{
    int a=1,n,i,d;
    float c=0.0,r;
    scanf("%d",&n);
    d=1;
    for(i=a;i<=n;i++)
    {
    r=1.0/i;
    c+=r;
   
    }
    printf("%.2f",c);
}  