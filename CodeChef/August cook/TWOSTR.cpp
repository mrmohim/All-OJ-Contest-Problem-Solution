#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t,m,n,x,i,s;
    char ch1[15],ch2[15];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",ch1,ch2);
        n=strlen(ch1);
        m=0;
        for(i=0; i<n; i++)
        {
           if(ch1[i]!=ch2[i])
           {
               if(ch1[i]!='?')
               {
                   if(ch2[i]!='?')
                   {
                       m=1;
                       break;
                   }
               }
           }
        }
        if(m==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
