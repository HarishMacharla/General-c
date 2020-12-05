// Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
int main()
{
    char ch;
    
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        printf("character is an alphabet\n");
    else if(ch>=0 || ch<=9)
        printf("character is number\n");
    else
        printf("character is a special character\n");
    return 0;
}