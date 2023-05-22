#include<stdio.h>
#include<conio.h>
#include<time.h>
void selection(int arr[100],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }

        printf("The sorted aaray is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    int arr[10],n,i;
    double start,end,time;

    start = (double)clock();
    printf("enter the number of elemnts = ");
    scanf("%d",&n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    selection(arr,n);

    end=(double)clock();
    time = end - start;


    printf("time taken = %f",time);
}
