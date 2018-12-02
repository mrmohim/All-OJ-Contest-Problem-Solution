#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long n,t,i,k,ch[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        k=0;
        for(i=9; i>1; i--)
        {
            while(n%i==0)
            {
                n/=i;
                ch[k++]=i;
            }
        }
        sort(ch,ch+k);
        if(n==1)
        {
            for(i=0; i<k; i++)
                cout<<ch[i];
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
