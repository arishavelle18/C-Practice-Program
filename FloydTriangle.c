#include<stdio.h>
#include<stdlib.h>

///Write a program in C to print the Floyd's Triangle.
/// 1
/// 01
/// 101
/// 0101
/// 10101

void DisplayFloydTriangle(int );

int main()
{
    int term;

    printf("Enter the number : ");
    scanf("%d",&term);

    DisplayFloydTriangle(term);
}
void DisplayFloydTriangle(int term)
{
    int row,col,j=0,temp;

    for(row=1;row<=term;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==1)
                j=(row%2==0)?0:1;
            else
                j=(j==1)?0:1;

         printf("%d ",j);
        }
      printf("\n");
    }
}
