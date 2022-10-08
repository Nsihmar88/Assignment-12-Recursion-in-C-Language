// Write a recursive function to print octal of a given decimal number

#include<stdio.h>

void Octal_Numb(int);
int main()
{
    int num;
    printf("Enter a number to print Octal of a given decimal numbers: ");
    scanf("%d",&num);
    Octal_Numb(num);
    return 0;
}
void Octal_Numb(int num)
{
    
    if (num == 0)
        return;
    Octal_Numb(num/8);
    printf("%d",num%8);
    
}