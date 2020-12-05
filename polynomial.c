
//finding the roots of a polynomial

#include <stdio.h>
#include <math.h>

int main()
{
    float root1 ,root2;
    float a,b,c;
    float discrimant;

    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);

    discrimant=(b*b)-(4*a*c);

    root1=(-b+sqrt(discrimant))/(2*a);
    root2=(-b-sqrt(discrimant))/(2*a);

    printf("the first root:%.3f\n",root1);
    printf("the second root:%.3f\n",root2);

    return 0;
}
