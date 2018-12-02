#include<stdio.h>
int main()
{
    int n,m,x,y,s,i,j,ar[20001];
    scanf("%d",&y);
    for(m=1; m<=y; m++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=1; i<=n-1; i++)
        {
            for(j=1; j<=n-i; j++)
            {
                if(ar[j]<ar[j+1])
                {
                    x=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=x;
                }
            }
        }
        s=0;
        for(j=3; j<=n; j+=3)
        {
            s+=ar[j];
        }
        printf("%d\n",s);
    }
    return 0;
}
