#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define PI acos(-1)
int main()
{
    double x,y,z;
    double s,p,r1,r2,s1,s2,s3;
    while(cin>>x>>y>>z)
    {
        p=(x+y+z)/2;
        s=sqrt(p*(p-x)*(p-y)*(p-z));
        r1=x*y*z/4/s;
        r2=sqrt((p-x)*(p-y)*(p-z)/p);

        s1=PI*r1*r1-s;
        s3=PI*r2*r2;
        s2=s-s3;
        printf("%.4f %.4f %.4f\n",s1,s2,s3);
    }
    return 0;
}
