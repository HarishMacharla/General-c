//WRITE PROGRAM TO FIND THE BIGGEST AMONG THREE

#include <stdio.h>

int main()
{
    int a,b,c ,max;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    
    if (a>b)
    {
        if (a>c)
            max=a;
        else
            max=c;
    }        
    else 
    {    if (b>c)
            max=b;
        else
            max=c;
    }    
    printf("the maximum of a,b,c is:%d\n",max); 

    return 0;
    
}