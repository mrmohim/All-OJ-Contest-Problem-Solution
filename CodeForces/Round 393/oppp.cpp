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
int arrr[8][40];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int n,m,aaa,b,xx,y,d;
    while(cin>>m>>d)
    {
        int en=31;
        d--;
        if(m==2) en=28;
        else
        {
            if(m%2) en=30;
        }
        int cnt=0,i=0;
        while(en)
        {
            if(d==7) d=0,i++;
            arrr[d][i]=cnt;
            en--,d++;
        }
        cout<<++i<<endl;
    }
    return 0;
}



