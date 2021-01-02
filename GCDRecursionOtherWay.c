#include<stdio.h>
#include<stdlib.h>

/*Write a program in C to find GCD of two numbers using recursion. Go to the editor
Test Data :
Input 1st number: 10
Input 2nd number: 50
Expected Output :

The GCD of 10 and 50 is: 10

*/
int GCD(int greater,int lesser,int temp);
int main()
{
    int num1,num2,hold;
    printf("Enter the number : ");
    scanf("%d",&num1);
    printf("Enter the number : ");
    scanf("%d",&num2);

    hold = (num1>num2)?GCD(num1,num2,num2):GCD(num2,num1,num1);
    printf("The GCD of %d and %d : %d",num1,num2,hold);
}
int GCD(int greater,int lesser,int temp)
{   if((greater% temp==0 && lesser%temp==0 )||temp==0)
        return temp;
    else
    {
        return GCD(greater,lesser,--temp);
    }
}

