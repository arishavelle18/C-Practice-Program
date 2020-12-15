#include<stdio.h>
#include<stdio.h>
/// Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
///   1
///  2 3
/// 4 5 6
///7 8 9 10

void DisplayPyramidNum(int);

int main()
{
    int Pyramid_num;

    printf("Enter the pyramid number : ");
    scanf("%d",&Pyramid_num);

    DisplayPyramidNum(Pyramid_num);
}
void DisplayPyramidNum(int Pyramid_num)
{
    int row,column,num=1;

    for(row=1;row<=Pyramid_num;row++)
    {
        for(column=Pyramid_num;column>row;column--) /// for space
        {
            printf(" ");
        }
        for(column=1;column<=row;column++) /// for pyramid
        {
            printf("%d ",num++);
        }
     printf("\n");
    }
}
