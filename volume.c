//finding the volume of cube with given dimensions
#include <stdio.h>

int main()
{   
    int length=3,breadth=5,height=4;
    int volume;

    volume= length*breadth*height;

    printf("the dimensions of cube:%d X %d x %d\n",length,breadth,height);
    printf("the volume of a cube:%d\n",volume);

    int perimeter;
    perimeter=4*(length*breadth*height);
    printf("the perimeter of cube:%d\n",perimeter);
    return 0;
}