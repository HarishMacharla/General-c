// to find the number of sacks required for rice

#include <stdio.h>

#define KGPERSACK 20
#include <math.h>

int main()
{
    int weight,no_of_sacks;
    float x;
    printf("enter the weight of rice:");

    scanf("%d", &weight);


    no_of_sacks=ceil(weight/KGPERSACK);
    printf("the no.ofsacks required for %d kgs of rice:%d\n",weight,no_of_sacks);

    return 0;

        

    
}

