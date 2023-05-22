#include<stdio.h>
#include <stdlib.h>

int findkey(int key[],int mstset[],int V)
{
    int i,min=999,min_index=-1;
    for(i=0;i<V;i++)
    {
        if(key[i]<min && mstset[i]==0)
        {
            min=key[i];
            min_index=i;
        }
    }
    return min_index;
}



void prim(int graph[100][100], int V)
{
    int parent[V];
    int key[V],mstset[V];
    int i,j,u,v;
    for(i=0;i<V;i++)
    {
        key[i]=999;
        mstset[i]=0;

    }
    key[0]=0;
    parent[0]=-1;
    for(i=0;i<V-1;i++)
    {
        u=findkey(key,mstset,V);
        mstset[u]=1;
        for(v=0;v<V;v++)
        {
           if(graph[u][v] && graph[u][v]<key[v] && mstset[v]==0)
           {
               parent[v]=u;
               key[v]=graph[u][v];
           }
        }

    }
    printf("\ne\t\tw");
    for(i=0;i<V;i++)
    {x
        printf("\n%d-%d\t%d",parent[i],i,graph[i][parent[i]]);
    }
}





void main()
{
    int V,i,j;
    int graph[100][100];
    printf("enter no of vertices");
    scanf("%d",&V);
    printf("eneter adjacancy matrix");
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    prim(graph,V);

}

