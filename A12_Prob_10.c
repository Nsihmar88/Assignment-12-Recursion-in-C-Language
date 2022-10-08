// Write a recursive function to print reverse of a given number.

#include<stdio.h>

void R_Numb(int);
int main()
{
    int num;
    printf("Enter a number to print reverse of number: ");
    scanf("%d",&num);
    R_Numb(num);
    return 0;
}
void R_Numb(int num)
{
    
    if (num/10==0)
    {
        printf("%d",num);
        return;
    }
    printf("%d",num%10);
    R_Numb(num/10);
    
    
}