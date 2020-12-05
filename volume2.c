//finding the volume of the cube with the dimensions given by the user
#include <stdio.h>

int main()
{
    int length,breadth,height;
    int volume;

    printf("enter dimensions:\n");

    printf("enter length:");
    scanf("%d",&length);

    printf("enter breadth:");
    scanf("%d",&breadth);
    
    printf("enter height:");
    scanf("%d",&height);

    volume= length*breadth*height;
    printf("the volume of the cube:%d\n",volume);
    return 0;
}
