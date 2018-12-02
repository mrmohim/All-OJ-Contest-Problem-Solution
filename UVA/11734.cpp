#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int j;
string merag(string x)
{
    string y;
    for(j=0;x[j];j++)
        if(x[j]!=' ')
            y.push_back(x[j]);
    return y;
}
int main()
{
    string a,b;
    int t,i;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        getline(cin,a);
        getline(cin,b);
        if(a==b)
            printf("Case %d: Yes\n",i);
        else
        {
            a=merag(a);
            b=merag(b);
            if(a==b)
                printf("Case %d: Output Format Error\n",i);
            else
                printf("Case %d: Wrong Answer\n",i);
        }
    }
    return 0;
}
