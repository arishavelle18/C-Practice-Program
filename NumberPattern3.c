#include<stdio.h>
#include<stdlib.h>

 ///  1
 ///  2 3
 ///  4 5 6
 ///  7 8 9 10

void DisplayTriangleNum(int);

int main()
{
    int Triangle_Num;

    printf("Enter the number : ");
    scanf("%d",&Triangle_Num);

    DisplayTriangleNum(Triangle_Num);
}
void DisplayTriangleNum(int Triangle_Num)
{
    int row,column,num=1;

    for(row=1;row<=Triangle_Num;row++)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d ",num++);
        }
     printf("\n");
    }
}
