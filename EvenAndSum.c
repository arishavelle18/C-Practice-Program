#include<stdio.h>
#include<stdlib.h>

/// Question : Write a program in C to display the n terms of even natural number and their sum.
void Display_EvenNum(int);

int main()
{
    int Number_even;

    printf("Enter the number : ");
    scanf("%d",&Number_even);

    Display_EvenNum(Number_even);
}
void Display_EvenNum(int Number_even)
{
    int count=0,Numbers=1,Total=0;

    while(count!=Number_even)
    {
        if(Numbers%2==0)
        {
            count++;
            printf("%d ",Numbers);
            Total+=Numbers;
        }
     Numbers++;
    }
    printf("\nResult of the summation of even: %d ",Total);
}
