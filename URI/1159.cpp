#include<iostream>
using namespace std;
int main()
{
    int t,x,y,i,s;
    while(1)
    {
        cin>>x;
        if(x==0)
            break;
        s=0;
        if(x%2==0)
            s+=x;
        else
        {
            x+=1;
            s+=x;
        }
        for(i=1; i<5; i++)
        {
            x+=2;
            s+=x;
        }
        cout<<s<<endl;
    }
    return 0;
}
