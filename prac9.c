// Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
int main()
{   
    int retval;
    char alp;
    printf("enter alphabet:");
    retval=scanf("%c",&alp);

    if(alp == 'a'||alp == 'e'|| alp == 'i'||alp == 'o'||alp == 'u' || alp == 'A'|| \
     alp == 'E'||alp == 'I'||alp == 'o'||alp == 'U')
        printf("character is a vowel\n");
    else if(alp>='A' && alp<='Z' || alp>='a' && alp<='z')
        printf("character is a consonat\n");
    else
    {
        printf("you entered is not a alphabet\n");
    }
    

    return 0;
}