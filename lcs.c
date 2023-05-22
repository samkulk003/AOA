#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int i,j,m,n,lcs_table[100][100];
char s1[100],s2[100];
void main()
{

    printf("enter string 1=");
    scanf("%s",&s1);
    printf("enter string 2=");
    scanf("%s",&s2);
    lcs();

}

void lcs()
{
    m=strlen(s1);
    n=strlen(s2);
    for(i=0;i<=m;i++)
        lcs_table[i][0];
    for(i=0;i<=n;i++)
        lcs_table[0][i];

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                lcs_table[i][j]=lcs_table[i-1][j-1]+1;
            }
            else if(lcs_table[i-1][j]>lcs_table[i][j-1])
            {
                lcs_table[i][j]=lcs_table[i-1][j];
            }
            else
            {
                lcs_table[i][j]=lcs_table[i][j-1];
            }
        }
    }
    int index=lcs_table[m][n];
    char lcs[index+1];
    lcs[index]='\0';
    i=m,j=n;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            lcs[index-1]=s1[i-1];
            i--;
            j--;
            index--;
        }
        else if(lcs_table[i-1][j]>=lcs_table[i][j-1])
            i--;
        else
            j--;
    }
    printf("s1=%s and s2=%s\n",s1,s2);
    printf("lcs =%s\n",lcs);
    printf("length of lcs =%d",strlen(lcs));
}
