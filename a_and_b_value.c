#include<stdio.h>
int main()
{
    int num1,num2,num3,big;
    printf("enter the value of num1:");
    scanf("%d",&num1);
     printf("enter the value of num2:");
    scanf("%d",&num2);
    printf("enter the value of num3:");
    scanf("%d",&num3);
    big= num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("your biger value is  : %d",big);






    return 0;
}
