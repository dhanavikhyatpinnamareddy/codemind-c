#include<stdio.h>
int main()
{
    int n,i,m,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0 && i%2==0)
        {
                   c=c+1;
           
            
        }

       
    }
     printf("%d ",c);
}