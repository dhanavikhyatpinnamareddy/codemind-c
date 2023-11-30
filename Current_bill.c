#include<stdio.h>
int main()
{int b;
float t,g;
scanf("%d",&b);
if(b<=199)
{
    t=(b*1.20)+100;
    printf("%.2f",t);
}else if(b>=200 && b<400){
    t=(b*1.50)+100;
    printf("%.2f",t);
}else if(b>=400 && b<600){
    g=(b*1.80);
    t=g+(0.15*g);
    printf("%.2f",t);
}else{
    g=(b*2.00);
    t=g+(0.15*g);
    printf("%.2f",t);
}

}