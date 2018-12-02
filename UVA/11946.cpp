#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,s,j;
    string ch;
    cin>>t;
    getchar();
    while(t--)
    {
        s=0;
        while(getline(cin,ch))
        {
            if(ch.empty())
            {
                s+=1;
            }
            if(s==2)
                break;
            else
            {
                for(i=0; ch[i]; i++)
                {
                    if(isdigit(ch[i]))
                    {
                        if(ch[i]=='1')
                            cout<<"I";
                        else if(ch[i]=='2')
                            cout<<"Z";
                        else if(ch[i]=='3')
                            cout<<"E";
                        else if(ch[i]=='4')
                            cout<<"A";
                        else if(ch[i]=='5')
                            cout<<"S";
                        else if(ch[i]=='6')
                            cout<<"G";
                        else if(ch[i]=='7')
                            cout<<"T";
                        else if(ch[i]=='8')
                            cout<<"B";
                        else if(ch[i]=='9')
                            cout<<"P";
                        else if(ch[i]=='0')
                            cout<<"O";
                    }
                    else
                    {
                        if(ch[i]=='\n')
                            cout<<endl;
                        else
                            cout<<ch[i];
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
