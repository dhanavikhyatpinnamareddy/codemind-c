#include<stdio.h>
int main()
{
    int n,f,s,l;
    scanf("%d",&n);
    l=n%10;
    while(n>=10){
        n/=10;
    }
    f=n;
    s=f+l;
    printf("%d",s);
}