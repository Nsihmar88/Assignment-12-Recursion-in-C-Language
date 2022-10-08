//Write a recursive function to print first N even natural numbers in reverse order.

#include<stdio.h>

void N_Even(int);
int main()
{
    int number;

    printf("\nEnter a number to print first N Even Natural Numbers in reverse order: ");
    scanf("%d",&number);
    N_Even(number);
    return 0;
}
void N_Even(int number)
{    
    if (number==0)
        return;
    printf(" %d",2*number);
    N_Even(number-1);   
}