#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t,n,i,x,y,num[110];
    char ch[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x=0;
        for(i=1;i<=n;i++)
        {
            scanf("%s",ch);
            if(strcmp(ch,"LEFT")==0)
            {
                x-=1;
                num[i]=-1;
            }
            else if(strcmp(ch,"RIGHT")==0)
            {
                x+=1;
                num[i]=1;
            }
            else
            {
                scanf("%s%d",ch,&y);
                x+=num[y];
                num[i]=num[y];
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
