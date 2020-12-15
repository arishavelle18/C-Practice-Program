#include<stdio.h>
#include<stdlib.h>
/// Write a program in C to display n terms of natural number and their sum.Go to the editor
/// Test Data : 7
/// Expected Output :
/// The first 7 natural number is :
/// 1 2 3 4 5 6 7
/// The Sum of Natural Number upto 7 terms : 28

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
   printf("\nThe Sum of Natural Number up to %d term is : %d ",Total_Number,Sum_Total);
}
