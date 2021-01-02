#include<stdio.h>
#include<stdlib.h>
/*
Write a program in C to print the array elements using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

*/
int* even(int* ptr,int temp,int i,int j);
int main()
{
    int number,*ptr,j=0,i=0,temp;
    printf("Enter the number : ");
    scanf("%d",&number);
    temp = number*2;
    ptr = malloc(sizeof(int)*temp);
    ptr = even(ptr,temp,i,j);

    for(i=0;i<number;i++)
    {
        printf("Element #%d: %d \n",i+1,*(ptr+i));

    }
    free(ptr);
}

int* even(int* ptr,int temp,int i,int j)
{
    if(i == temp)
    {
        *(ptr+j)=i;
        return ptr;
    }
    else
    {
        if(i%2==0&&i!=0)
        {
            *(ptr+j)=i;
                j++;
        }
        i++;
    return even(ptr,temp,i,j);
    }



}
