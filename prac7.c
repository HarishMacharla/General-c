// /Write a C program to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
int main()
{
    int number;
    printf("entet number:");
    scanf("%d",&number);

    if(number%5 == 0 && number%11 ==0 )
        printf("number is divisible by both 5 and 11\n");
    else if(number%5 ==0)
        printf("number is only divisible by 5\n");
    else if(number%11 ==0)
        printf("number is divisible only by 11\n");
    else
        printf("number is not divisible by 5 and 11\n");

    return 0;

}