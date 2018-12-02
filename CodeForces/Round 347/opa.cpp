#include <stdio.h>

int mod(char s[],int d)
{
    int r = 0;
    int i;
    for(i=0; s[i]; ++i)
    {
        r=10*r +(s[i] - 48);
        r = r % d;
    }
    return r;
}

int gcd(int a,int b)
{

    if(!b)
        return a;

    else
        gcd(b,a%b);
}

int main()
{
    int t;
    int a;
    char b[257];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);
        scanf("%s",b);

        if(0 == a)
        {
            printf(b);
            putchar('\n');
        }
        else
            printf("%d\n",gcd(a,mod(b,a)));

    }

    return 0;
}
