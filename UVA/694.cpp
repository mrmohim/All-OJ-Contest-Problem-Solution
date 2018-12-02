#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    long long i,j=0,a,b,n,m,x,y;
    while(cin>>a>>b)
    {
        x=a;
        if(a<0 || b<0)
            continue;
        else
        {
            j+=1;
            m=0;
            while(a<=b)
            {
                if(a==1)
                {
                    m+=1;
                    break;
                }
                else if(a%2==0)
                {
                    a/=2;
                    m+=1;
                }
                else if(a%2==1)
                {
                    a=(a*3)+1;
                    m+=1;
                }
            }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,x,b,m);
        }
    }
    return 0;
}
