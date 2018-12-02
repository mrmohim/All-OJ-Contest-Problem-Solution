/* ===================================*/
/* Author :   Moshiur Rahman Mohim    */
/* Email  :   mtmohim74@gmail.com     */
/* Institute: HSTU                    */
/* ===================================*/

#include <bits/stdc++.h>
using  namespace  std;

const int N = int(5e3)+10;

typedef pair<int,int> pii;

pii r[N],c[N];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++)
    {
        int ty,x,y;
        cin>>ty>>x>>y; x--;
        if(ty==1)
            r[x]=make_pair(y,i);
        else
            c[x]=make_pair(y,i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<m;j++)
        {
            if(r[i].second>=c[j].second)
                cout<<r[i].first<<" ";
            else
                cout<<c[i].first<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
