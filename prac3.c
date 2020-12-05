//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num>0)   
        printf("number is positive\n");
    else if(num<0)
        printf("number is negative\n");
    else 
        printf("number is zero\n");
    
    return 0;

}