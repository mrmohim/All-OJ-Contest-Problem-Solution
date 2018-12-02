#include<iostream>
#include<cstdio>
using namespace std;
#define mx 500001
int ch[mx];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        ch[1]=1;
        ch[2]=2;
        int ne=2;
        for(int i=3; i<=500000; i++)
        {
            if(i<ne)
                ne=2;
            ch[i]=ne;
            ne+=2;
        }
        printf("%d\n",ch[n]);
    }
    return 0;
}
