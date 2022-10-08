// Write a recursive function to print binary of a given decimal number.

#include<stdio.h>

void Bin_Numb(int);
int main()
{
    int num;
    printf("Enter a number to print binary of a given decimal numbers: ");
    scanf("%d",&num);
    Bin_Numb(num);
    return 0;
}
void Bin_Numb(int num)
{    
    if (num == 0)
        return;
    Bin_Numb(num/2);
    printf("%d",num%2);    
}