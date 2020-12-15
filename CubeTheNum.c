#include<stdio.h>
#include<stdlib.h>
#include<math.h>

///Write a program in C to display the cube of the number upto given an integer.

void Display_Cube_Num(int);

int main()
{
    int Cube_Number;
    printf("Input number of terms : ");
    scanf("%d",&Cube_Number);

    Display_Cube_Num(Cube_Number);

}
void Display_Cube_Num(int Cube_Number)
{
    int Numbers;
    double Convert_Cube;

    for(Numbers=1;Numbers<=Cube_Number;Numbers++)
    {
        Convert_Cube = pow(Numbers,3);         ///Power(Base,Exponent)  Ex : pow(3,2) = 3^2 = 3 * 3 9
        printf("Cube of the %d is :%.2f \n",Numbers,Convert_Cube);
    }
}
