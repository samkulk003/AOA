#include<stdio.h>
#include<stdlib.h>
void dij(int graph[100][100],int n, int source)
{
    int dist[100],visited[100],nextnode,i,j,min;
    for(i=0;i<n;i++)
    {
        dist[i]=999;
        visited[i]=0;
    }
    dist[source]=0;
    for(i=0;i<n;i++)
    {
        min=999;
        for(j=0;j<n;j++)
        {
            if(dist[j]<min && visited[j]==0)
            {
                min=dist[j];
                nextnode=j;
            }
        }
        visited[nextnode]=1;
        for(j=0;j<n;j++)
        {
            if(!visited[j] && dist[j]>dist[nextnode]+graph[nextnode][j] && graph[nextnode][j] != 0)

            {
                dist[j]=dist[nextnode]+graph[nextnode][j];
            }
        }}
        printf("shortest dist from %d is ",source);
        for(i=0;i<n;i++){
            printf("vertex %d-->%d= %d",source,i,dist[i]);
            printf("\n");}
    }

void main()
{
    int graph[100][100],n,source,i,j;
    printf("enetr no of vertices");
    scanf("%d",&n);
    printf("enetr  vertices");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("graph[%d][%d]",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    printf("enetr source");
    scanf("%d",&source);
    dij(graph,n,source);
}

