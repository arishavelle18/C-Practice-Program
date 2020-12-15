#include<stdio.h>
#include<conio.h>
/// Write a program in C to display the first 10 natural numbers. Go to the editor
/// Expected Output :
/// 1 2 3 4 5 6 7 8 9 10

void Display_Natural_Numbers(int );

int main()
{
    int Total_Number;
    printf("Enter the number : ");
    scanf("%d",&Total_Number);

    Display_Natural_Numbers(Total_Number);
}
void Display_Natural_Numbers(int Total_Number)
{
    int Number;
    printf("Result : \n");
    for(Number = 1;Number<=Total_Number;Number++)
    {
        printf("%d ",Number);
    }
}
