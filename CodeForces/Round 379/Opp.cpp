#include <bits/stdc++.h>
using  namespace  std;
const int INF = 1000000007;
int main()
{
    int i,n,x0,y0,x1,y1,ev,nv,wv,sv,ev1,nv1,wv1,sv1,ed1,nd1,sd1,wd1,ed11,nd11,sd11,wd11;
    char c;
    scanf("%d%d%d",&n,&x0,&y0);
    ev=nv=ev1=nv1=nd1=wd1=nd11=wd11=INF;
    wv=sv=wv1=sv1=ed1=ed11=sd1=sd11=-INF;
    for(i=1;i<=n;i++)
    {
        getchar();
        scanf("%c%d%d",&c,&x1,&y1);
        if(x1==x0 && y1<y0)
        {
            wv=max(wv,y1);
            if(c=='R' || c=='Q') wv1=max(wv1,y1);
        }
        else if(x1==x0 && y1>y0)
        {
            ev=min(ev,y1);
            if(c=='R' || c=='Q') ev1=min(ev1,y1);
        }
        else if(y1==y0 && x1<x0)
        {
            sv=max(sv,x1);
            if(c=='R' || c=='Q') sv1=max(sv1,x1);
        }
        else if(y1==y0 && x1>x0)
        {
            nv=min(nv,x1);
            if(c=='R' || c=='Q') nv1=min(nv1,x1);
        }
        if(abs(x1-x0)==abs(y1-y0))
        {
            if(x1>x0 && y1>y0)
            {
                nd1=min(nd1,x1);
                if(c=='B' || c=='Q') nd11=min(nd11,x1);
            }
            else if(x1<x0 && y1>y0)
            {
                ed1=max(ed1,x1);
                if(c=='B' || c=='Q') ed11=max(ed11,x1);
            }
            else if(x1<x0 && y1<y0)
            {
                sd1=max(sd1,x1);
                if(c=='B' || c=='Q') sd11=max(sd11,x1);
            }
            else if(x1>x0 && y1<y0)
            {
                wd1=min(wd1,x1);
                if(c=='B' || c=='Q') wd11=min(wd11,x1);
            }
        }
    }
    if(((wv1!=-INF || wv!=-INF) && wv1>=wv) || ((ev1!=INF || ev!=INF) && ev1<=ev) || ((sv1!=-INF || sv!=-INF) && sv1>=sv) || ((nv1!=INF || nv!=INF) && nv1<=nv) || ((ed1!=-INF || ed11!=-INF) && ed1<=ed11) || ((nd1!=INF || nd11!=INF) && nd11<=nd1) || ((wd1!=INF || wd11!=INF) && wd11<=wd1) || ((sd1!=-INF || sd11!=-INF) && sd1<=sd11))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
