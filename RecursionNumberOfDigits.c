#include<stdio.h>
#include<stdlib.h>

/*Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data :
Input a number : 50
Expected Output :

The number of digits in the number is :  2
*/
long long int DigitCount(long long int number,long long int counter);

int main()
{
    long long int number,counter=0,hold;
    printf("Enter the number : ");
    scanf("%lld",&number);
    hold = DigitCount(number,counter);
    printf("The number of digits : %lld",hold);
}
long long int DigitCount(long long int number,long long int counter)
{
    long long int rem;
    if(number==0)
        return counter;
    else
    {
        rem = number %10;
        return DigitCount(number/10,++counter); /// same as DigitCount(number/=10,++counter);
    }
}


