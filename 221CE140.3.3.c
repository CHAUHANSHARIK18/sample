#include<stdio.h>

int main()
{
    int a,b;
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("Before Swapping A:%d B:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping A:%d B:%d\n",a,b);
    printf("\n\n\nthis program made by 22TCE140");





}
