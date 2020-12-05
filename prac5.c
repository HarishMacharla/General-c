//Write a C program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("number is even\n");
    else
    {
        printf("number is odd\n");
    }
    
}