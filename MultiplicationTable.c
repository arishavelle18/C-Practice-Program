#include<stdio.h>
#include<stdlib.h>

/// Write a program in C to display the multipliaction table vertically from 1 to n.

void MultiplicationTable(int);

int main()
{
    int Multiply;

    printf("Input the number you want to calculate : ");
    scanf("%d",&Multiply);

    MultiplicationTable(Multiply);
}
void MultiplicationTable(int Multiply)
{
    int row,column;

    for(row=1;row<=10;row++)
    {
        for(column=1;column<=Multiply;column++)
        {
            printf("%d x %d = %d \t",column,row,(column*row));
        }
     printf("\n");
    }
}
