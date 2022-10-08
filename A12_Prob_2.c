// Write a recursive function to print first N natural numbers in reverse order.

#include<stdio.h>

void R_N_Natural(int);
int main()
{
    int number;

    printf("\nEnter a number to print first N Natural Numbers in reverse order: ");
    scanf("%d",&number);
    R_N_Natural(number);
    return 0;
}
void R_N_Natural(int number)
{    
    if (number==0)
        return;
    printf(" %d",number);
    R_N_Natural(number-1);   
}