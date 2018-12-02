#include<stdio.h>
int main()
{
    int t,m,n,x,i,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=x=-200000;
        scanf("%d",&a);
        for(i=1; i<n; i++)
        {
            scanf("%d",&b);
            if(a>m)
                m=a;
            if(m-b>x)
                x=m-b;
            a=b;
        }
        printf("%d\n",x);
    }
    return 0;
}
