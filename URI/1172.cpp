#include<iostream>
using namespace std;
int main()
{
    int x,i;
    for(i=0;i<10;i++)
    {
        cin>>x;
        if(x<=0)
            x=1;
        cout<<"X["<<i<<"] = "<<x<<endl;
    }
    return 0;
}
