#include<stdio.h>
int main()
{
    int n,r,rev=0,t;
    printf("enter n:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    printf("palindrome number");
    else
    printf("not palindrome");
    }


