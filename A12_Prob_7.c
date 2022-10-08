// Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>

void P_SQ_N_Numb(int);
int main()
{
    int num;
    printf("Enter a number to print squares of first N natural numbers: ");
    scanf("%d",&num);
    P_SQ_N_Numb(num);
    return 0;
}
void P_SQ_N_Numb(int num)
{
    
    if (num == 0)
        return;
    P_SQ_N_Numb(num-1);
    printf(" %d ",num*num);
    
}