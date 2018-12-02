#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long double n;
    int i;
    while(cin>>n)
    {
        if(n==1)
        {
            printf("Ollie wins.\n");
            continue;
        }
        for(i=1; ; i++)
        {
            if(i%2==1)
                n/=9;
            else
                n/=2;
            if(n<=1)
                break;
        }
        if(i%2==0)
            printf("Ollie wins.\n");
        else
            printf("Stan wins.\n");
    }
    return 0;
}
