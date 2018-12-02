#include<stdio.h>
int main()
{
    int n,i,cont1=0,cont2=0,cont3=0;
    int lesmas[10000];
    while(scanf("%d",&n)!=EOF)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&lesmas[i]);
            if(lesmas[i]<10)
                cont1++;
            if(lesmas[i]>=10 && lesmas[i]<20)
                cont2++;
            if(lesmas[i]>=20)
                cont3++;
        }
        if(cont3!=0)
            printf("3\n");
        else if (cont2!=0)
            printf("2\n");
        else
            printf("1\n");
        cont1=0;
        cont2=0;
        cont3=0;
    }
    return 0;
}
