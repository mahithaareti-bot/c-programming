#include<stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;
if (a > b && a > c){
    printf("a is big");
    scanf("%d", a);
}
else if (b > a && b > c){
    printf("b is big");
    scanf("%d", b);
}
else{
        printf("c is big");
        scanf("%d", c);
}
        return 0;
}
