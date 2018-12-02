#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char ch[1000];
    int i=0,j=0,s=0,k=0,z=0,y=0,x=0,u=0,v=0,es=0;
    cin>>ch;
    s=strlen(ch);
    cout<<"The input is: " <<ch<<endl;
    for(i=0; i<s; i++)
    {
        if(ch[i]==0)
        {
            return 0;
        }
        if(isalpha(ch[i]) && ch[i+1]!='/' && ch[i+1]!='*' && ch[i+1]!='.')
        {
            cout<<"\nq["<<j<<","<<ch[i]<<"]--->"<<j+1;
            j++;
            es=j;
        }
        if(isalpha(ch[i]) && ch[i+1]=='.' && isalpha(ch[i+2]))
        {

            cout<<"\nq["<<j<<","<<ch[i]<<"]--->"<<j+1;
            j++;
            cout<<"\nq["<<j<<","<<ch[i+2]<<"]--->"<<j+1;
            j++;
            i+=2;
            es=j;
        }
        if(isalpha(ch[i]) && ch[i+1]=='/' && isalpha(ch[i+2]))
        {
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            cout<<"\nq["<<j<<",e]--->"<<j+2;
            j++;
            cout<<"\nq["<<j<<","<<ch[i]<<"]--->"<<j+2;
            j++;
            cout<<"\nq["<<j<<","<<ch[i+2]<<"]--->"<<j+2;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j+2;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            j++;
            i+=2;
            es=j;
        }


        if(isalpha(ch[i]) && ch[i+1]=='*')
        {
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            cout<<"\nq["<<j<<",e]--->"<<j+3;
            j++;
            cout<<"\nq["<<j<<","<<ch[i]<<"]--->"<<j+1;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j-1;
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            j++;
            es=j;
        }
        if(ch[i]==')' && ch[i+1]=='*' && isalpha(ch[i-1]) && isalpha(ch[i-3]) && ch[i-2]=='/')
        {
            cout<<"\nq["<<j-7<<",e]--->"<<j;
            cout<<"\nq["<<j-1<<",e]--->"<<j-6;
            es=j;
        }
        if(ch[i]=='(')
        {
            for(k=i; k<=s; k++)
            {
                if(ch[k]==')')
                {
                    z=k;
                    break;
                }
            }
            for(k=i; k<z; k++)
            {
                if(ch[k]=='/')
                {
                    y=k;
                    break;
                }
            }
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            j++;
            cout<<"\nq["<<j<<",e]--->"<<j+1;
            cout<<"\nq["<<j<<",e]--->"<<j+2;
            x=j+2;
            u=j;  // starting state j=1
            j++;
            es=j;
            for(k=i; k<=y; k++)
            {

                if(isalpha(ch[k])&&ch[k+1]!='*'&&ch[k+1]!='.')
                {
                    cout<<"\nq["<<j<<","<<ch[k]<<"]--->"<<j+2;
                    j+=2;
                    es=j;
                }
                if(isalpha(ch[k])&&ch[k+1]=='.'&&isalpha(ch[k+2]))
                {
                    cout<<"\nq["<<j<<","<<ch[k]<<"]--->"<<j+2;
                    j+=2;
                    cout<<"\nq["<<j<<","<<ch[k+2]<<"]--->"<<j+2;
                    j+=2;
                    k++;
                    es=j;
                }

            }
            for(k=y; k<=z; k++)
            {

                if(isalpha(ch[k])&&ch[k+1]!='/'&&ch[k+1]!='*'&&ch[k+1]!='.')
                {
                    cout<<"\nq["<<x<<","<<ch[k]<<"]--->"<<x+2;
                    x+=2;
                }
                if(isalpha(ch[k])&&ch[k+1]=='.'&&isalpha(ch[k+2]))
                {
                    cout<<"\nq["<<x<<","<<ch[k]<<"]--->"<<x+2;
                    x+=2;
                    cout<<"\nq["<<x<<","<<ch[k+2]<<"]--->"<<x+2;
                    x+=2;
                    k+=2;
                }
            }
            if(j<x)
            {
                cout<<"\nq["<<j<<",e]--->"<<x+1;
                cout<<"\nq["<<x<<",e]--->"<<x+1;
                j=x+1;
                v=j;    //last state
                cout<<"\nq["<<j<<",e]--->"<<j+1;
                j++;
                i=i+z;
                es=j;
            }
            else
            {
                cout<<"\nq["<<j<<",e]--->"<<j+1;
                cout<<"\nq["<<x<<",e]--->"<<j+1;
                j=j+1;
                v=j;    //last state
                cout<<"\nq["<<j<<",e]--->" <<j+1;
                j++;
                i=i+z;
                es=j;
            }

            if (ch[z+1]=='*')
            {
                cout<<"\nq["<<u-1<<",e]--->" <<v+1;
                cout<<"\nq["<<v<<",e]--->" <<u;
            }

        }
    }
    cout<<"\n starting state is 0";
    cout<<"\n ending state is "<<es;
    return(0);
}
