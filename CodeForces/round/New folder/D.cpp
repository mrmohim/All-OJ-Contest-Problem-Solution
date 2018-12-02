//
// Created by  on 06.03.2018.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int A[(int)1e6];
int B[(int)1e6];

int n,m,k;

int main(){
    cin>>n;
    int s = 0;
    int mx=0;
    for(int i = 0; i<n; i++){
        cin>>A[i];
        s+=A[i];
    }
    int r = 0;
    sort(A,A+n);
    for(int i = 0; i<n; i++){
        r+=A[i];
        int l = 0;
        for(int j = i+1; j<n; j++){
            l+=A[j];
        }
        mx = max(max(mx,r - l),l - r);
    }
    cout<<max(s,mx);
    return 0;
}
