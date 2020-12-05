//write a program that finds the maxmium of three numbers

#include <stdio.h>
int main()
{
    int a1,a2,a3,max;
    printf("enter three numbers seperated by comma:");
    scanf("%d,%d,%d",&a1,&a2,&a3);

    if(a1>a2)
        if(a1>a3)
            max=a1;
        else
            max=a3;
    else 
        if(a2>a3)
            max=a2;
        else
            max=a3;
    printf("the max of three numbers:%d\n",max);

    return 0;

    
        
        
        
}