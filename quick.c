#include<time.h>
#include <stdio.h>
void quicksort(int a[100],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(i<last && a[i]<a[pivot])
                i++;
            while(a[j]>a[pivot] && j!=pivot)
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);


        }
    }






int main()
{
int i,n,a[10];
printf("Enter n: ");
scanf("%d",&n);
printf("Enter array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("Sorted Array: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
