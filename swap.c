#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:a=%d,b=%d",a,b);
    return 0;
}
