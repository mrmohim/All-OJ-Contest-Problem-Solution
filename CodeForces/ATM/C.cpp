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
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;
typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;
string st;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    cin>>st;
    LL n,m=0,x=0,y=0;
    n=st.size();
    for(LL i=0; i<n; i++)
    {
        if(st[i]=='a')
        {
            if(x==0 && i==n-1)
                printf("z");
            else
                cout<<st[i];
            if(x==1)
                y=1;
        }
        else
        {
            x=1;
            if(y==1)
                cout<<st[i];
            else
                printf("%c",st[i]-1);
        }
    }
    return 0;
}
