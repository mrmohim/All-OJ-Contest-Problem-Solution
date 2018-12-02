#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j;
    char s[220];
    scanf("%d%s",&n,s);
    sort(s,s+n);
    sort(s+n,s+2*n);
    for(i=0; i<n; i++)
    {
        if(s[i]<=s[i+n])
            break;
    }
    for(j=0; j<n; j++)
    {
        if(s[j]>=s[j+n])
            break;
    }
    printf(i==n || j==n ? "YES\n" : "NO\n");
    return 0;
}
