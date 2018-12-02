#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>

#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;
#define sf              scanf
#define pf              printf
typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;
/*............End............*/
/*.......Global Declaration.......*/
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL nn,xx,y=0,z;
    cin>>nn;
    xx=nn/2;
    pf("%lld\n",xx);
    if(nn%2!=0)
    {
        y=1;
        xx-=1;
    }
    for(LL i=1;i<=xx;i++)
    {
        pf("2");
        if(i!=xx)
            pf(" ");
    }
    if(y==1)
        pf(" 3");
    return 0;
}

