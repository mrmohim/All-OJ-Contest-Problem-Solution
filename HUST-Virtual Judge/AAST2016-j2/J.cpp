#include <cstdio>
#include <cstring>
#define ll long long
int const MAX = 1e5 + 5;
int const MOD = 1e9 + 7;
int a[MAX];
ll dp[MAX], sum[MAX];

int main()
{
    int t, k;
    scanf("%d %d", &t, &k);
    for(int i = 0; i < k; i++)
        dp[i] = 1;
    for(int i = k; i < MAX; i++)
        dp[i] = (dp[i - 1] % MOD + dp[i - k] % MOD) % MOD;
    sum[1] = dp[1];
    for(int i = 2; i < MAX; i++)
        sum[i] = (sum[i - 1] % MOD + dp[i] % MOD) % MOD;
    while(t --)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n", (MOD + sum[b] - sum[a - 1]) % MOD);
    }
}
