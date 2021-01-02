#include<stdio.h>
#include<stdlib.h>
/*
Write a program in C to get the largest element of an array using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25
*/

int Largest(int* ptr,int compare,int num,int i);

int main()
{
    int num,*ptr,i,hold;
    printf("Enter the number : ");
    scanf("%d",&num);
    ptr = malloc(sizeof(int)*num);
    for(i=0;i<num;i++)
    {
        scanf("%d",ptr+i);
    }
    hold=Largest(ptr,*(ptr+0),num,0);
    printf("Largest number : %d ",hold);

    free(ptr);

}
int Largest(int* ptr,int compare,int num,int i)
{
    if(num==i)
        return compare;
    else
    {
        compare = (compare> *(ptr+i))? compare : *(ptr+i);
        return Largest(ptr,compare,num,++i);
    }
}
