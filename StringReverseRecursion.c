#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Write a program in C to reverse a string using recursion. Go to the editor
Test Data :
Input any string: w3resource
Expected Output :

The reversed string is: ecruoser3w
*/
int Reverse(char *word,int len);

int main()
{
    int len;
    char arr[100];
    char *word=arr;
    scanf("%s",arr);
    len=strlen(word);
    printf("%c",Reverse(word,len-1));
}
int Reverse(char *word,int len)
{
    if(len==0)
    {
        return *(word+len);
    }
    else
    {
        printf("%c",*(word+len));
        Reverse(word,--len);
    }
}
