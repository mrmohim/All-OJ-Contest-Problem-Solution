#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,j,s,n;
    char ch[1000],c;
    scanf("%d%c",&t,&c);
    for(i=1; i<=t; i++)
    {
        gets(ch);
        n=strlen(ch);
        s=0;
        for(j=0; j<n; j++)
        {
            if(ch[j]=='a' || ch[j]=='d' || ch[j]=='g' || ch[j]=='j' || ch[j]=='m' || ch[j]=='p' || ch[j]=='t' || ch[j]=='w' || ch[j]==' ')
                s+=1;
            else if(ch[j]=='b'|| ch[j]=='e' || ch[j]=='h' || ch[j]=='k' || ch[j]=='n' || ch[j]=='q' || ch[j]=='u' || ch[j]=='x')
                s+=2;
            else if(ch[j]=='c'|| ch[j]=='f' || ch[j]=='i' || ch[j]=='l' || ch[j]=='o' || ch[j]=='r' || ch[j]=='v' || ch[j]=='y')
                s+=3;
            else if(ch[j]=='s'|| ch[j]=='z')
                s+=4;
        }
        printf("Case #%d: %d\n",i,s);
    }
    return 0;
}
