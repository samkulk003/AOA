#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[100];
int place(int pos)
{
    int i;
    for(i=1;i<pos;i++)//imp
    {
        if((a[i]==a[pos]) || (abs(a[i]-a[pos])==abs(i-pos)))
            return 0;
    }
    return 1;


}
void print(int n)
{
    int i,j;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(a[i]==j)
            {
                printf("q");
            }
            else
            {
                printf("*");
            }
        }
         printf("\n");
    }

}
void nqueen(int n)
{
    int k=1;
    a[k]=0;
    while(k!=0)
    {
        a[k]=a[k]+1;
        while(a[k]<=n && !place(k))//imp
        {
         a[k]++;
        }
        if(a[k]<=n)
        {
            if(k==n)
            {
                print(n);
            }
            else
            {
                k++;
                a[k]=0;
            }
        }
        else
        {
            k--;
        }

    }


}
void main()
{
    int n;
    printf("enter no of queens");
    scanf("%d",&n);
    nqueen(n);


}
