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
using  namespace  std;

#define FOR(i, b, n)    for(LL i=b; i<=n; i++)

#define sf              scanf
#define pf              printf

typedef long long int           LL;
typedef char                    C;

/*............End............*/
/*.......Global Declaration.......*/
C ch[1010][200],c;
LL ar[200];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL i=1,j=-1,k=0,a=0,p=0,mx=0,s,n,b,m;
    while(sf("%c",&c)!=EOF)
    {
        if(c=='\n')
        {
            k+=1;
            if(p>ar[k])
                ar[k]=p;
            ch[i][j+1]='\0';
            if(k>mx)
                mx=k;
            a=0;
            i+=1;
            j=-1;
            k=0;
            p=0;
            continue;
        }
        if(c==' ' && a==0)
            continue;
        else
        {
            if(a==1)
            {
                if(ch[i][j]==' ' && c==' ')
                    continue;
            }
            if(c!=' ')
            {
                p+=1;
            }
            else
            {
                k+=1;
                if(p>ar[k])
                    ar[k]=p;
                p=0;
            }
            a=1;
            j+=1;
            ch[i][j]=c;
        }
    }
    mx-=1;
    s=0;
    FOR(l,1,200)
    {
        ar[l]+=(1+s);
        s=ar[l];
    }
    FOR(x,1,i-1)
    {
        n=strlen(ch[x]);
        b=0;
        s=0;
        FOR(y,0,n-1)
        {
            if(ch[x][y]==' ')
            {
                b+=1;
                if(y+s<ar[b]-1)
                {
                    m=s;
                    FOR(w,1,(ar[b]-1)-(y+m))
                    {
                        pf(" ");
                        s+=1;
                    }
                }
            }
            pf("%c",ch[x][y]);
        }
        pf("\n");
    }
    return 0;
}
