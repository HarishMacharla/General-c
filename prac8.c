// // Write a C program to check whether a character is alphabet or not.

// #include <stdio.h>
// int main()
// {
//     char alp;
//     printf("enter character:");
//     scanf("%c",&alp);

//     if(alp>='A' && alp<='Z')
//         printf("you entered alphabet\n");
//     else if(alp>='a' && alp<='z')
//         printf("you  entered alphabet\n");
//     else
//     {
//         printf("you entered is not an alphabet\n");
//     }
    
//     return 0;
        

// }
#include <stdio.h>

int main()
{
    char ch;

    /* Input a character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}