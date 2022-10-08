//Write a recursive function to print first N natural numbers.

#include<stdio.h>

void N_Natural(int);
int main()
{
    int number;

    printf("\nEnter a number to print first N Natural Numbers: ");
    scanf("%d",&number);
    N_Natural(number);
    return 0;
}
void N_Natural(int number)
{    
    if (number==0)
        return;
    N_Natural(number-1);
    printf(" %d",number);
        
}