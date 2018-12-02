#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    int i=-1,j,k,n=-1,x,y;
    char c,ch[10000],ch1[5];
    while(scanf("%c",&c)!=EOF)
    {
        i+=1;
        if(i<4)
            ch1[i]=c;
        if(n==3)
        {
            if(ch[0]=='D' && ch[1]=='O' && ch[2]=='N' && ch[3]=='E')
                break;
        }
        if(c!='\n')
        {
            if(c!='.' && c!=',' && c!='!' && c!='?' && c!='?' && c!=' ')
            {
                n+=1;
                if(islower(c))
                    c=toupper(c);
                ch[n]=c;
            }
        }
        else
        {
            ch[n+1]='\0';
            x=strlen(ch)-1;
            y=0;
            for(k=0; k<=x; k++)
            {
                if(ch[k]!=ch[x-k])
                {
                    y=1;
                    break;
                }
            }
            if(y==1)
                cout<<"Uh oh..\n";
            else
                cout<<"You won't be eaten!\n";
            n=-1;
            i=-1;
        }
    }
    return 0;
}
