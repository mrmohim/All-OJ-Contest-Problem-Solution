#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long int li;
#define mx 100001
int ar[mx+5];
int  ar1[mx+5];
int main()
{
    li i,a,b,t,j,x,y,sum,m;
    cin>>a;
    for(i=0; i<a; i++)
        cin>>ar[i];
    cin>>m;
    sort(ar,ar+a);
    j=a-1;
    while(i<j)
    {
        sum=ar[i]+ar[j];
        cout<<ar[i]<<endl;
        if(sum<m)
            i++;
        else if(sum>m)
            j--;
        else
        {
            x=ar[i];
            y=ar[j];
            i++;
            j--;
        }
    }
    printf("Peter should buy books whose prices are %lld and %lld.",x,y);
    return 0;
}
