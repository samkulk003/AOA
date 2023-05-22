#include<stdio.h>
int graph[100][100];
int n,m,i,j,colour;
void graph_colour(int graph[100][100],int m,int n)
{
    int available[100],vertexcolour[100];
    for(j=0;j<n;j++)
        {
            vertexcolour[j]=-1;
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            available[j]=1;
        }

        for(j=0;j<n;j++)
        {
            if(graph[i][j]==1 && vertexcolour[j]!=-1)
                available[vertexcolour[j]]=0;
        }
        for(colour=0;colour<m;colour++)
        {
            if(available[colour]==1)
                break;

        }
        vertexcolour[i]=colour;


    }
    printf("\nv\tc\t");
    printf("\n");

    for(j=0;j<n;j++)
    {
        printf("%d\t%d\t",j+1,vertexcolour[j]);
        printf("\n");
    }
}

void main()
{

    printf("\nenter no of vertices");
    scanf("%d",&n);
    printf("\nenter vertices");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("edge bet [%d][%d]",i,j);
           scanf("%d",&graph[i][j]);
        }
    }
    printf("\nenter no of coulour");
    scanf("%d",&m);
    graph_colour(graph,m,n);
}
