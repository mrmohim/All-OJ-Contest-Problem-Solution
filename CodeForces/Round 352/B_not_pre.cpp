/* ===================================*/
/* Author :   Moshiur Rahman Mohim    */
/* Email  :   mtmohim74@gmail.com     */
/* Institute: HSTU                    */
/* ===================================*/

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

char ch[100010];
long long int ar[1000];

int main()
{
    long long int n,a,s,i;
    scanf("%I64d",&n);
    cin>>ch;
    for(i=0; ch[i]; i++)
    {
        ar[ch[i]]++;
    }
    a=0;
    s=0;
    for(i='a'; i<='z'; i++)
    {
        if(ar[i]>1)
            a+=ar[i]-1;
        else if(ar[i]==0)
            s++;
    }
    if(a>s)
        printf("-1\n");
    else
        printf("%I64d\n",a);
    return 0;
}
