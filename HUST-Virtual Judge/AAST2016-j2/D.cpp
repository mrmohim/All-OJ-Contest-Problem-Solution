#include<stdio.h>
#define ll long long
#define N_lim 100010
ll max(ll a, ll b)
{
    return a>b?a:b;
}
ll largestArea(int h[], int n)
{
    ll i, top = 1, area = 0, S[N_lim];
    h[0] = S[0] = h[++n] = 0;
    for(i=1; i<=n; i++)
    {
        while(top>1 && h[S[top-1]]>=h[i])
        {
            area = max(area, (ll)h[S[top-1]]*(ll)(i - S[top-2]-1));
            top--;
        }
        S[top++] = i;
    }
    return area;
}
int main()
{
    int n, i, h[N_lim];
    while(scanf("%d", &n)==1 && n)
    {
        for(i=1; i<=n; i++) scanf("%d", &h[i]);
        printf("%lld\n", largestArea(h, n));
    }
    return 0;
}
