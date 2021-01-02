#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int *num,number,i,target,*retur;
    scanf("%d",&number);
    num = malloc(sizeof(int)*number);
    retur=malloc(sizeof(int)*number);
    for(i=0;i<number;i++)
    {
        scanf("%d",(num+i));
    }
    scanf("%d",&target); // target
    retur = twoSum(num,number,target,retur);
    for(i=0;i<2;i++)
    {
        printf("%d ",*(retur+i));
    }



}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i=0,j,temp,k=0,hold;

    while(i!=numsSize)
    {
        temp = *(nums+i); // arr[0]
        for(j=i;j<numsSize;j++)
        {
            if(temp+ *(nums+j) == target)
            {
                    *(returnSize+k)=i;
                    k++;
                    *(returnSize+k) = j;
            }
        }

    i++;

    }
    return returnSize;

}

