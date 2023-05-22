#include<stdio.h>
void main()
{
    int i,j;
    float n,temp,p=0,w[100][100],total;
    printf("enter no of items");
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        printf("enter  wt and value of %d",i+1);
        scanf("%f%f",&w[i][0],&w[i][1]);
        w[i][2]=w[i][1]/w[i][0];
        w[i][3]=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(w[i][2]<w[j][2])
            {
                temp=w[i][2];
                w[i][2]=w[j][2];
                w[j][2]=temp;
                temp=w[i][0];
                w[i][0]=w[j][0];
                w[j][0]=temp;
                temp=w[i][1];
                w[i][1]=w[j][1];
                w[j][1]=temp;


            }
        }
    }
    printf("enter total wt");
    scanf("%f
          ",&total);
    i=0;
    while(total>=0 && i<n)
    {
        if(w[i][0]<=total)
        {
            total=total-w[i][0];
            p=p+w[i][1];
            w[i][3]=1;
            i++;
        }
        else
        {
            p=p+total*w[i][2];
            w[i][3]=total/w[i][0];
            break;
        }
    }
     printf("\nw\tp\tr\tc");
      printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%f\t%f\t%f\t%f",w[i][0],w[i][1],w[i][2],w[i][3]);
        printf("\n");
    }

}
