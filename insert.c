#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
    int arr[10],n,i;
    double start,end,time;
    printf("enter the number of elemnts = ");
    scanf("%d",&n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    start=(double)clock();
    insert(arr,n);
    end=(double)clock();
    time=end-start;
}
insert(int arr[100],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("sorted");
     for(i=0;i<n;i++)
        printf("%d",arr[i]);
}
