#include<stdio.h>
#include<stdlib.h>
/*Write a program in C to find the sum of digits of a number using recursion. Go to the editor
Test Data :
Input any number to find sum of digits: 25
Expected Output :

The Sum of digits of 25 = 7
*/
long long int SumOfDigits(long long int number,long long int sum);

int main()
{
    long long int number,sum=0,hold;
    printf("Enter the number : ");
    scanf("%lld",&number);
    hold = SumOfDigits(number,sum);
    printf("Sum of Digits : %lld ",hold);
}
long long int SumOfDigits(long long int number,long long int sum)
{
    long long int rem;
    if(number==0)
        return sum;
    else
    {
        rem = number %10;
        return SumOfDigits(number/=10,sum+=rem);
    }
}
