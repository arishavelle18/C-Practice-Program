#include<stdio.h>
#include<stdlib.h>
/// Write a program in C to display the pattern like a pyramid
//// using asterisk and each row contain an odd number of asterisks.
///   *
///  ***
/// *****

void DisplayPyramid(int);

int main()
{
    int num_Pyramid;
    printf("Enter the numbe : ");
    scanf("%d",&num_Pyramid);

    DisplayPyramid(num_Pyramid);

}
void DisplayPyramid(int num_Pyramid)
{
    int row,col,asterisk;

    for(row=1;row<=num_Pyramid;row++)
    {
        for(col=num_Pyramid;col>=row;col--) /// space
        {
            printf(" ");
        }
        for(asterisk=1;asterisk<=(2*row)-1;asterisk++) /// 2n-1 for odd
        {
            printf("*");
        }
     printf("\n");
    }
}

