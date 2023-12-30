#include<stdio.h>
int main()
{
    int a,num,large=0,rem=0;
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%10;
        if(rem>large)
        {
            large=rem;
        }
        a=a/10;
    
    }
    printf("%d",large);
}