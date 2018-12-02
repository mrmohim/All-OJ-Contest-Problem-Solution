/* ===================================*/
/* Author :   Moshiur Rahman Mohim    */
/* Email  :   mtmohim74@gmail.com     */
/* Institute: HSTU                    */
/* ===================================*/

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int ar[100005];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int n,m,q,x,y,a,b,s,c,ft,lt,mid;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&x);
        a=0;
        ft=0;
        lt=n-1;
        while(ft<=lt)
        {
            mid=(ft+lt)/2;
            if(ar[mid]==x && ar[mid+1]!=x)
            {
                printf("%d\n",mid+1);
                a=1;
                break;
            }
            else if(ar[mid-1]<x && ar[mid]>x)
            {
                printf("%d\n",mid);
                a=1;
                break;
            }
            else if(x<ar[mid])
                lt=mid-1;
            else
                ft=mid+1;
        }
        if(a==0)
        {
            if(ar[n-1]<x)
                printf("%d\n",n);
            else
                printf("%d\n",0);
        }
    }
    return 0;
}
