#include<stdio.h>
#include<stdlib.h>
///Pattern
/// *
/// **
/// ***
/// ****

void DisplayPattern(int);

int main()
{
    int Number_triangle;
    printf("Enter the number : ");
    scanf("%d",&Number_triangle);

    DisplayPattern(Number_triangle);

}

void DisplayPattern(int Number_triangle)
{
    int row,column;

    for(row = 1;row<=Number_triangle;row++)
    {
        for(column=1;column<=row;column++)
        {
            printf("* ");
        }
      printf("\n");
    }
}
