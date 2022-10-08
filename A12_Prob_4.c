// Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void N_Odd(int);
int main()
{
    int number;

    printf("\nEnter a number to print first N Odd Natural Numbers in reverse order: ");
    scanf("%d",&number);
    N_Odd(number);
    return 0;
}
void N_Odd(int number)
{    
    if (number==0)
        return;
    printf(" %d",2*number-1);
    N_Odd(number-1);
       
}