#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int j=0,v=0,x=0,l=0,c=0;
        for(i=1;i<=n;i++)
        {
            if(i>=90 && i<=100)
                c+=1;
            if(i>=40 && i<=89)
                l+=1;
            if((i>=9 && i<=18) || (i>=40 && i<=48) || (i>=59 && i<=68) || (i>=90 && i<=98))
                x+=1;
            if((i>=19 && i<=28) || i==49 || (i>=69 && i<=78) || i==99)
                x+=2;
            if((i>=29 && i<=38) || (i>=79 && i<=88))
                x+=3;
            if(i==39 || i==89)
                x+=4;
            if((i>=4 && i<=8) || (i>=14 && i<=18) || (i>=24 && i<=28) || (i>=34 && i<=38) || (i>=44 && i<=48) || (i>=54 && i<=58) || (i>=64 && i<=68) || (i>=74 && i<=78) || (i>=84 && i<=88) || (i>=94 && i<=98))
                v+=1;
            if(i%10==1 || i%10==4 || i%10==6 || i%10==9)
                j+=1;
            if(i%10==2 || i%10==7)
                j+=2;
            if(i%10==3 || i%10==8)
                j+=3;
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,j,v,x,l,c);
    }
    return 0;
}
