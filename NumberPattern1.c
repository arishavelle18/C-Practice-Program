#include<stdio.h>
#include<stdlib.h>

/// 1
/// 12
/// 123
/// 1234


void DisplayTriangleNum(int);

int main()
{
    int triangle_num;

    printf("Enter the number : ");
    scanf("%d",&triangle_num);

    DisplayTriangleNum(triangle_num);
}
void DisplayTriangleNum(int triangle_num)
{
    int row,column;

    for(row=1;row<=triangle_num;row++)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d ",column);
        }
      printf("\n");
    }
}
