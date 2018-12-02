#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    bool arr[1000*1000+1]={false};
    int s,n,i;
    for(i=1; i<(1000*1000+1); i++)
    {
        s=i;
        n=i;
        while(n>0)
        {
            s+=(n%10);
            n/=10;
        }
        if(s<(1000*1000+1))
            arr[s]=true;
    }
    for(i=1; i<(1000*1000+1); i++)
        if(arr[i]==false)
            printf("%d\n",i);
    return 0;
}
