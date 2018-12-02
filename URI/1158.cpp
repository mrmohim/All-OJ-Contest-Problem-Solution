#include<iostream>
using namespace std;
int main()
{
    int t,x,y,i,s;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        s=0;
        if(x%2!=0)
            s+=x;
        else
            {
                x+=1;
                s+=x;
            }
        for(i=1;i<y;i++)
        {
            x+=2;
            s+=x;
        }
        cout<<s<<endl;
    }
    return 0;
}
