#include<stdio.h>
#include<conio.h>
void mergesort(int arr[100],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(arr,0,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);

    }
}
 void merge(int arr[100],int beg,int mid,int end)
 {
     int i,j,temp[100],k,index;
     i=beg,j=mid+1,index=beg;
     while((i<=mid) && (j<=end))
     {
         if(arr[i]<arr[j])
         {
         temp[index]=arr[i];
         i++;
         }
         else
         {
             temp[index]=arr[j];
             j++;
         }
         index++;
     }
     if(i>mid)
     {
         while(j<=end)
         {
             temp[index]=arr[j];
             j++;
             index++;
         }
     }
     else
     {
         while(i<=mid)
         {
             temp[index]=arr[i];
             i++;
             index++;
         }
     }
     for(k=beg;k<index;k++)
     {
         arr[k]=temp[k];
     }



     }





void main()
{
    int arr[10],n,i;

    printf("Enter the number of elements = ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i = 0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    mergesort(arr, 0, n-1);

    printf("The sorted array\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n",arr[i]);
    }

}
