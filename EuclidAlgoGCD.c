#include<stdio.h>
#include<stdlib.h>

/*Write a program in C to find GCD of two numbers using recursion. Go to the editor
Test Data :
Input 1st number: 10
Input 2nd number: 50
Expected Output :

The GCD of 10 and 50 is: 10

*/
int GCD(int greater,int lesser,int rem);

int main()
{
    int num1,num2,rem,div;
    printf("Input number 1: ");
    scanf("%d",&num1);
    printf("Input number 2: ");
    scanf("%d",&num2);
    rem=(num1>num2)?GCD(num1,num2,rem):GCD(num2,num1,rem);
    printf("GCD of %d and %d : %d",num1,num2,rem);
}
int GCD(int greater,int lesser,int rem)
{
    if(lesser==0)
        return greater;
    else
    {
        rem = greater %lesser;
        GCD(lesser,rem,rem);
    }
}
