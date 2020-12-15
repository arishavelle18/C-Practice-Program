#include<stdio.h>
#include<stdlib.h>

/// Write a program in C to read 10 numbers from keyboard and find their sum and average.

void Find_Sum_And_Average(int);

int main()
{
    int Numbers;
    printf("Enter the number : ");
    scanf("%d",&Numbers);
    Find_Sum_And_Average(Numbers);
}
void Find_Sum_And_Average(int Numbers)
{
    int Sum_Total = 0 ,Total_Ave = Numbers,Loop,User_Number;

    for(Loop = 1;Loop<=Numbers;Loop++)
    {
        printf("Number-%d : ",Loop);
        scanf("%d",&User_Number);
        Sum_Total+= Loop;
    }
    printf("The sum of %d no is : %d",Numbers,Sum_Total);
    printf("\nThe Average is : %.2f",(float)Sum_Total/Total_Ave); /// typecast

}
