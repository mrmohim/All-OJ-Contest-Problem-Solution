#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
using  namespace  std;

typedef long long int           LL;
LL arrr[100];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL a,b,n,m,x;
    cin>>n;
    for(LL i=1;i<=n;i++)
    {
        cin>>arrr[i];
    }
    if(n==1)
    {
        if(arrr[1]==0)
            printf("UP\n");
        else if(arrr[1]==15)
            printf("DOWN\n");
        else
            printf("-1\n");
    }
    else if(arrr[n-1]<arrr[n])
    {
        if(arrr[n]==15)
            printf("DOWN\n");
        else
            printf("UP\n");
    }
    else if(arrr[n-1]>arrr[n])
    {
        if(arrr[n]==0)
            printf("UP\n");
        else
            printf("DOWN\n");
    }
    return 0;
}
