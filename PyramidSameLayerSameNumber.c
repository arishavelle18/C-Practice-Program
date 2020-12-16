#include<stdio.h>
#include<stdlib.h>

/// Question : Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.
///   1
///  2 2
/// 3 3 3
///4 4 4 4

void DisplayPyramid(int);

int main()
{
    int num_Pyramid;

    printf("Enter the number : ");
    scanf("%d",&num_Pyramid);

    DisplayPyramid(num_Pyramid);

}

void DisplayPyramid(int num_Pyramid)
{
    int row,col,num;

    for(row=1;row<=num_Pyramid;row++)
    {
        for(col=num_Pyramid;col>=row;col--) /// space
        {
            printf(" ");
        }
        for(num=1;num<=row;num++)
        {
            printf("%d ",row);
        }
     printf("\n");
    }
}
