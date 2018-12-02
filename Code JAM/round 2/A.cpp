#include<bits/stdc++.h>
using  namespace  std;
double kkk[1005],s[1004];
int main()
{
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
    long long n,t,w,i;
    double d,x,y,z;
    cin>>t;
    for(w=1; w<=t; w++)
    {
        cin>>d>>n;
        z=0.0;
        for(i=1; i<=n; i++)
        {
            cin>>kkk[i]>>s[i];
            x=(d-kkk[i])/s[i];
            if(x>=z)
            {
                z=x;
            }
        }
        y=(d/z);
        printf("Case #%lld: %.6lf\n",w,y);
    }
    return 0;
}


