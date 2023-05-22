#include<stdio.h>
#include<conio.h>
void binary(int arr[100],int l,int h,int x)
{
    int mid,c=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==x)
        {
            printf("elemnt at %d",mid+1);
            c=1;
            break;
        }

        else if(arr[mid]>x)
            h=mid-1;
        else
            l=mid+1;
    }
    if(c==0)
        printf("no");
}


void main()
{
    int i,n,arr[100],x,j,temp=0;
    printf("Enter the number of elements = ");
    scanf("%d",&n);

    printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched = ");
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    binary(arr,0,n-1,x);


}
