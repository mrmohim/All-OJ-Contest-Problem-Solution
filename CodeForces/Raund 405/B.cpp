#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(0);cin.tie(false);cout.tie(false);

int main()
{
    fast;
    ll n, a[100010],cnt=0,x=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0 && a[i-1]==1 && a[i]==1 && x==0)
            x=2;
    }
    if(n<=2)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=0; i<n-2; i++)
    {
        if(a[i]+a[i+1]==a[i+2])
        {
            if(cnt==0)
                cnt+=3;
            else
                cnt+=1;
        }
        else
            cnt=0;
        if(cnt>x)
            x=cnt;
    }
    cout<<x<<endl;
    return 0;
}
