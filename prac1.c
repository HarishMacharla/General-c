///write a c program to find maximum of two numbers

#include <stdio.h>
int main()
{
    int num1,num2,max;
    printf("enter two numbers seperated by comma:");
    scanf("%d,%d",&num1,&num2);

    if(num1>num2)
        max=num1;
    else
    {
        max=num2;
    }
    printf("the maximum of two numbers\n:%d",max);
}
