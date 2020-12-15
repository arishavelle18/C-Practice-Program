#include<stdio.h>
#include<stdlib.h>
/// Write a C program to find the sum of first 10 natural numbers. Go to the editor
/// Expected Output :
/// The first 10 natural number is :
/// 1 2 3 4 5 6 7 8 9 10
/// The Sum is : 55

void Display_Natural_Numbers(int);

int main()
{
    int Total_Number;
    printf("Enter the number : ");
    scanf("%d",&Total_Number);

    Display_Natural_Numbers(Total_Number);

}
void Display_Natural_Numbers(int Total_Number)
{
    int Number,Sum_Total=0;

    printf("The first %d natural number is : \n",Total_Number);
    for(Number = 1;Number<=Total_Number;Number++)
    {
            Sum_Total+=Number;
            printf("%d ",Number);
    }
   printf("\nThe Sum is : %d ",Sum_Total);
}
