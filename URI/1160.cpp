#include<iostream>
using namespace std;
int main()
{
    int t,i;
    double a,b,x,y,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        for(i=1;i<=100;i++)
        {
            if(a==0)
            {
                cout<<"Mais de 1 seculo.\n";
                break;
            }
            if(b!=0)
            {
                b+=((b*y)/100);
                b=int(b);
            }
            a+=((a*x)/100);
            a=int(a);
            if(a>b)
            {
                cout<<i<<" anos.\n";
                break;
            }
        }
        if(i==101)
        {
            cout<<"Mais de 1 seculo.\n";
        }
    }
    return 0;
}
