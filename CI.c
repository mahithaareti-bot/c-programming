#include<math.h>
#include<stdio.h>
int main()
{
    float principle,rate,time,CI;
    printf("enter principle amount:");
    scanf("%f",&principle);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    CI=principle*(pow((1+rate/100),time));
    printf("compound intrest is:%f",CI);
    return 0;
}
    
