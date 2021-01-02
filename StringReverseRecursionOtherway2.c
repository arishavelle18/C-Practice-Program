#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Write a program in C to reverse a string using recursion. Go to the editor
Test Data :
Input any string: w3resource
Expected Output :

The reversed string is: ecruoser3w
*/
void Reverse();

int main()
{
    Reverse();
}
void Reverse()
{   char temp;
    scanf("%c",&temp);
    if(temp!='\n')
    {
        Reverse();
        printf("%c",temp);
    }
}
