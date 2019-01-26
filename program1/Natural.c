#include <stdio.h>

int main(void)
{
    int Number, Counter;
    printf("Enter the number to print natural numbers till the given numbers:");
    scanf("%d",&Number);
    printf("The first %d natural numberss are", Number);
    for(Counter = 1; Counter <= Number; Counter ++){
        printf(" %d", Counter);
    }
    printf(".");
    
}