#include<iostream>
using namespace std;
int main()
{
    int t,x,i,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>x;
        if(x==1)
            cout<<x<<" eh primo\n";
        for(i=2; i<x; i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            cout<<x<<" eh primo\n";
        else
            cout<<x<<" nao eh primo\n";
    }
    return 0;
}
