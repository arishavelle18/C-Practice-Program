#include<stdio.h>
#include<stdlib.h>

/// Write a C program to calculate the factorial of a given number.

int Factor(int Factorial);

int main()
{
    int Factorial,Hold;
    printf("Input the Factorial : ");
    scanf("%d",&Factorial);

    Hold = Factor(Factorial);

    printf("Factorial of %d is %d",Factorial,Hold);

}
int Factor(int Factorial)
{
    if(Factorial==1)
    {
        return 1;
    }
    else
    {
        return Factorial * Factor(Factorial-1);
    }
}
