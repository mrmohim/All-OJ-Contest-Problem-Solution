#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    double q,c,x,y,a1,b1,a,b;
    long long i,k,s,j;
    char ch[1000];
    while(scanf("%lld%lld%lld%lf%lf",&i,&k,&s,&a1,&b1)!=EOF)
    {
        a=a1;
        b=b1;
        x=sqrt(2.0);
        y=sqrt(3.0);
        if(i>k)
        {
            int w=i;
            i=k;
            k=w;
        }
        for(j=i+1; j<=k; j++)
        {
            a1=(x*(a+b))-(x*y*(a-b));
            b1=(x*(a-b))+(x*y*(a+b));
            a=a1;
            b=b1;
        }
        q=(a1+b1)/(pow(2,s));
        sprintf(ch,"%lf",q);
        int m=strlen(ch);
        int e=0;
        for(int j=0; j<m; j++)
        {
            if(e==1)
            {
                if(ch[j]=='0')
                {
                    ch[j]='\0';
                    break;
                }
            }
            if(ch[j]=='.')
                e=1;
            printf("%c",ch[j]);
        }
        q=atof(ch);
        printf("\n");
        scanf("%lf",&c);
        c=c-q;
        if(c<0)
            c=-c;
        if(c<=0.01)
            break;
    }
    return 0;
}
