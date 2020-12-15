#include<stdio.h>
#include<stdlib.h>

/// Write a program in C to display the n terms of odd natural number and their sum .

void Display_Odd_Num(int);

int main()
{
    int Number_Of_Odd;

    printf("Enter the number : ");
    scanf("%d",&Number_Of_Odd);

    Display_Odd_Num(Number_Of_Odd);
}
void Display_Odd_Num(int Number_Of_Odd)
{
    int Count_Of_Odd=1,Number=1,Sum_Total=0;

    printf("The odd number are : \n");

    while(Count_Of_Odd<=Number_Of_Odd)
    {

        if(Number%2!=0)
        {
            printf("%d ",Number);
            Sum_Total+=Number;
            Count_Of_Odd++;
        }
    Number++;
    }
    printf("\nSum of odd number upto %d is  %d ",Number_Of_Odd,Sum_Total);
}
