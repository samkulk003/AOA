#include<stdio.h>
#include<stdlib.h>
int subset[100],set[100];
int target_sum,n;
void find_sum(int i,int sum,int total)
{
    int j;
    if(sum==target_sum)
    {
        printf("{");
        for(j=0;j<total;j++)
        {
            printf("%d",subset[j]);
            if(j<total-1)
             printf(",");
        }
        printf("}");
    }
    else
    {
        if(i<n && set[i]+sum<=target_sum)
        {
            subset[total]=set[i];//imp
            find_sum(i+1,set[i]+sum,total+1);
             find_sum(i+1,sum,total);

        }
    }

}
void main()
{
    int i;
    printf("\nenter no of terms");
    scanf("%d",&n);
    //scanf("\n");
    printf("\nenter  terms");
    for(i=0;i<n;i++)
        scanf("%d",&set[i]);
    //scanf("\n");
    printf("\nenter target sum");
    scanf("%d",&target_sum);
    //scanf("\n");
    find_sum(0,0,0);

}

