#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;
char ch[130];
int main()
{
    int t,a,b,x,y,p,q,n,m,i,j,k;
    int ch1,ch2;
    scanf("%d",&n);
    getchar();
    char c;
    for(i=1; i<=n; i++)
    {
        scanf("%c",&ch[0]);
        if(ch[0]==' ')
        {
            getchar();
            printf("Yes\n");
        }
        else if(ch[0]=='\n')
        {
            printf("Yes\n");
        }
        else
        {
            for(j=1; j<130; j++)
            {
                scanf("%c",&ch[j]);
                if(ch[j]==' ')
                    j-=1;
                if(ch[j]=='\n')
                {
                    ch[j]='\0';
                    break;
                }
            }
            m=strlen(ch);
            if(m==1 || m%2!=0)
            {
                printf("No\n");
                continue;
            }
            for(j=0; j<m; j++)
            {
                x=0;
                if(ch[j]=='(')
                {
                    c=ch[j];
                    ch1=0;
                    ch2=0;
                    for(k=j; k<m; k++)
                    {
                        if(ch[k]=='(')
                            ch1+=1;
                        else if(ch[k]==')')
                            ch1-=1;
                        else if(ch[k]=='[')
                            ch2+=1;
                        else if(ch[k]==']')
                            ch2-=1;
                        if(ch1==0)
                        {
                            if(ch2==0)
                            {
                                ch[j]='*';
                                ch[k]='*';
                                break;
                            }
                            else
                            {
                                x=1;
                                printf("No\n");
                                break;
                            }
                        }
                        else if(k==m)
                        {
                            x=1;
                            printf("No\n");
                            break;
                        }
                    }
                }
                else if(ch[j]=='[')
                {
                    c=ch[j];
                    ch2=0;
                    ch1=0;
                    for(k=j; k<m; k++)
                    {
                        if(ch[k]=='(')
                            ch1+=1;
                        else if(ch[k]==')')
                            ch1-=1;
                        else if(ch[k]=='[')
                            ch2+=1;
                        else if(ch[k]==']')
                            ch2-=1;
                        if(ch2==0)
                        {
                            if(ch1==0)
                            {
                                ch[j]='*';
                                ch[k]='*';
                                break;
                            }
                            else
                            {
                                x=1;
                                printf("No\n");
                                break;
                            }
                        }
                        else if(k==m)
                        {
                            x=1;
                            printf("No\n");
                            break;
                        }
                    }
                }
                if(x==1)
                    break;
            }
            if(x==0)
            {
                for(j=0; j<m; j++)
                {
                    if(ch[j]!='*')
                    {
                        x=1;
                        break;
                    }
                }
                if(x==1)
                    printf("No\n");
                else
                    printf("Yes\n");
            }
        }
    }
    return 0;
}
