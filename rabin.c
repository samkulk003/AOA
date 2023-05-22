#include<stdio.h>
#include<stdlib.h>
#define d 256
#define q 101
void main()
{
    char txt[100],pat[100],n,m,i,j,h=1,t=0,p=0;
    printf("\nenter text");
    scanf("%s",txt);
    printf("\nenter pattern");
    scanf("%s",pat);
    n=strlen(txt);
    m=strlen(pat);
    for(i=0;i<m-1;i++)//imp
        h=(h*d)%q;
    for(i=0;i<m;i++)
    {
        t=(d*t+txt[i])%q;
        p=(d*p+pat[i])%q;
    }
    for(i=0;i<=n-m;i++)
    {
        if(t==p)
        {
            for(j=0;j<m;j++)
            {
                if(txt[i+j]!=pat[j])
                    break;
            }
            if(j==m)
            {
                printf("pattern is found at index %d\n ",i);
            }
        }
            if(i<n-m)
            {
                t=(d*(t-txt[i]*h)+txt[i+m])%q;
                if(t<0)
                    t=t+q;
            }
        }
    }


