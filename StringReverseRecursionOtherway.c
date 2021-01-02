#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Write a program in C to reverse a string using recursion. Go to the editor
Test Data :
Input any string: w3resource
Expected Output :

The reversed string is: ecruoser3w
*/
char* Reverse(char *word,int len,int i);

int main()
{
    int len,i;
    char *word=malloc(100);
    printf("Enter the word : ");
    scanf("%s",word);
    len=strlen(word);
    word=Reverse(word,len-1,0);
    printf("Reverse : ");

    for(i=0;i<len;i++)
    {
        printf("%c",*(word+i));
    }
}
char* Reverse(char* word,int len,int i)
{   char temp;
    if(i>len)
        return word;
    else
    {
        temp=*(word+i);
        *(word+i)=*(word+len);
        *(word+len)=temp;
        return Reverse(word,--len,++i);
    }
}
