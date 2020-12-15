#include<stdio.h>
#include<stdlib.h>

///  Write a program in C to display the multiplication table of a given integer.

void MuptiplicationTable(int);

int main()
{
    int Multiply;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d",&Multiply);

    MuptiplicationTable(Multiply);
}
void MuptiplicationTable(int Multiply)
{
    int Numbers;
    for(Numbers=1;Numbers<=10;Numbers++)
    {
        printf("%d x %d : %d \n",Multiply,Numbers,(Multiply*Numbers));
    }
}
