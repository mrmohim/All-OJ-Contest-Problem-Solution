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

template<typename element>
vector< vector<element> > subsets(const vector<element>& set)
{
    vector< vector<element> > ss;
    if (set.empty())
    {
        ss.push_back(set);
        return ss;
    }
    if (set.size() == 1)
    {
        vector<element> empty;
        ss.push_back(empty);
        ss.push_back(set);
        return ss;
    }
    vector<element> allbutlast;
    for (unsigned int i=0; i<(set.size()-1); i++)
    {
        allbutlast.push_back( set[i] );
    }
    vector< vector<element> > ssallbutlast = subsets(allbutlast);
    for (unsigned int i=0; i<ssallbutlast.size(); i++)
    {
        ss.push_back(ssallbutlast[i]);
    }
    for (unsigned int i=0; i<ssallbutlast.size(); i++)
    {
        ssallbutlast[i].push_back( set[set.size()-1] );
    }
    for (unsigned int i=0; i<ssallbutlast.size(); i++)
    {
        ss.push_back(ssallbutlast[i]);
    }
    return ss;
}
int ar[1000];
int main()
{
    vector<int> a;
    for(int i=1; i<=18; i++)
    {
        a.push_back(i);
    }
    vector< vector<int> > sa = subsets(a);
    int n,m;
    cin>>n;
    for(unsigned int j=0; j<sa[n].size(); j++)
    {
        ar[j]=sa[n][j];
        m=j;
    }
    for(int k=m; k>=0; k--)
        printf("%d ",ar[k]);
    return 0;
}
