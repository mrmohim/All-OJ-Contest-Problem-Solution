#include<iostream>
using namespace std;
int arr[100];
int re(int n)
{
    if(n==2||n==1)
        return 1;

   // if(arr[n]==0)
      //  arr[n]=re(n-1)+re(n-2);

    return re(n-1)+re(n-2);
}
int main()
{
    int i,j,n;
    cin>>n;
    int s=re(n);
    cout<<s;
}
