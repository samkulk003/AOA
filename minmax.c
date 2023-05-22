#include<stdio.h>
#include<conio.h>
int a[100];
int min,max,max1,min1,mid;
void main()
{
    int n,i;
    printf("Enter the number of elements = ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=1; i<= n; i++)
    {
        scanf("%d",&a[i]);
    }
   minmax(1,n);
   printf("min : %d  and max : %d",min,max);
}
void minmax(int i,int j)
{

    if(i==j)
    {
        max=min=a[i];
    }
    else if(i==j-1)
    {
        if(a[i]>a[j])
        {
            max=a[i];
            min=a[j];
        }
        else
        {
          max=a[j];
            min=a[i];
        }
    }
    else
    {
        mid=(i+j)/2;
        minmax(i,mid);
        int min1=min,max1=max;
        minmax(mid+1,j);
        if(min1<min)
          min=min1;
        if(max<max1)
            max=max1;


    }
}
