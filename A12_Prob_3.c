// Write a recursive function to print first N odd natural numbers

#include<stdio.h>

void N_Odd(int);
int main()
{
    int number;

    printf("\nEnter a number to print first N Odd Natural Numbers: ");
    scanf("%d",&number);
    N_Odd(number);
    return 0;
}
void N_Odd(int number)
{    
    if (number==0)
        return;
    N_Odd(number-1);
    printf(" %d",2*number-1);   
}