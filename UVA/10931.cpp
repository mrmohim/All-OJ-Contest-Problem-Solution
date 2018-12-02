#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long ch[10000],k,i,s,d;
    while(cin>>d)
    {
        if(d==0)
            break;
        k=1;
        s=0;
        for(i=d; i!=0; i/=2)
        {
            ch[k++]=i%2;
            if(i%2==1)
                s+=1;
        }
        cout<<"The parity of ";
        for(i=k-1 ; i>0; i--)
            cout<<ch[i];
        cout<<" is "<<s<<" (mod 2).\n";
    }
    return 0;
}
