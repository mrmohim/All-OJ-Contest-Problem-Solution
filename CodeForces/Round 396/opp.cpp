#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int l=a.length();
    int m=b.length();
    if(m!=l)
    {
        cout<<(m>l?m:l);
    }
    if(m==l)
    {
        for(int i=0;i<=m-1;++i)
        {
            for(int j=0;j<m-i-1;++j)
            {
                if(a[j]>a[j+1])
                {
                    char tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
                if(b[j]>b[j+1])
                {
                    char tmp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=tmp;
                }
            }
            //cout<<a<<" "<<b;

        }
        int c=0;
        for(int i=0;i<m;++i)
        {
            if(a[i]!=b[i])
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<m;
        else
            cout<<-1;

    }
    return 0;
}
