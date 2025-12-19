#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    printf("enter n:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum)
    printf("armstrong number");
    else
    printf("not armstrong");
    }


