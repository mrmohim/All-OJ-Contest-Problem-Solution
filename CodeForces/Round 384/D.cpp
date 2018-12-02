#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string.h>
#include <cstdlib>
#include <cmath>
#include <string>
typedef long long ll;
#define CLR(a) memset(a, 0, sizeof(a))
#define SD(a) scanf("%d", &a)
#define FOR(i, a, b)  for(i = a; i < b; i++)
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define MAXN 100000 + 10
using namespace std;

int main ()
{
     ll n, s, t;
     while (~scanf("%I64d%I64d", &n, &s))
     {
          ll x, y, z;
          ll i, j, k;
          t = n;
          while (t > 0)
          {
               for (i = 0, j = 1; i < t - 1; i++)
                    j *= 2;
               if (j == s)
               {
                    printf("%I64d\n", t);
                    break;
               }
               else
               {
                    if (s > j)
                         s = s - j;
                    else
                         s = j - s;
               }
               t--;
          }
     }
     return 0;
}
