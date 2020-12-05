//Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("enter year:");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is leap year:\n", year);
    else
    {
        printf("%d is leap year:\n", year);
    }
}