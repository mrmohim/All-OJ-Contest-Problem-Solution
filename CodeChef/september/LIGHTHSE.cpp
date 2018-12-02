#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long t,m,n,x,y,i,s,a,b,c,d,ne,se,sw,nw,i1,i2,i3,i4;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=b=c=d=ne=se=sw=nw=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld%lld",&x,&y);
            if(x>0 && y==0)
            {
                a=1;
                if(x>sw)
                {
                    sw=x;
                    i1=i;
                }
            }
            else if(x<0 && y==0)
            {
                b=1;
                if(x<ne)
                {
                    ne=x;
                    i2=i;
                }
            }
            if(y>0 && x==0)
            {
                c=1;
                if(y>se)
                {
                    i3=i;
                    se=y;
                }
            }
            else if(y<0 && x==0)
            {
                d=1;
                if(y<nw)
                {
                    nw=y;
                    i4=i;
                }
            }
        }
        if((a+b+c+d)<=2)
        {
            s=1;
            cout<<s<<endl;
            if((a+b+c+d)-(a+d)==0)
            {
                if(abs(nw)<=abs(sw))
                    cout<<i1<<" SW\n";
                else
                    cout<<i4<<" NE\n";
            }
            else if((a+b+c+d)-(b+d)==0)
            {
                if(abs(ne)<=abs(nw))
                    cout<<i4<<" NW\n";
                else
                    cout<<i2<<" SE\n";
            }
            else if((a+b+c+d)-(b+c)==0)
            {
                if(abs(se)<=abs(ne))
                    cout<<i2<<" NE\n";
                else
                    cout<<i3<<" SW\n";
            }
            else if((a+b+c+d)-(a+c)==0)
            {
                if(abs(sw)<=abs(se))
                    cout<<i3<<" SE\n";
                else
                    cout<<i1<<" NW\n";
            }
        }
        else if((a+b+c+d)==3)
        {
            s=1;
            cout<<s<<endl;
            if((a+b+c+d)-(a+d+b)==0)
            {
                if(abs(ne)<=abs(sw))
                    cout<<i1<<" SW\n";
                else
                    cout<<i2<<" SE\n";
            }
            else if((a+b+c+d)-(b+d+c)==0)
            {
                if(abs(se)<=abs(nw))
                    cout<<i4<<" NW\n";
                else
                    cout<<i3<<" SW\n";
            }
            else if((a+b+c+d)-(b+c+a)==0)
            {
                if(abs(sw)<=abs(ne))
                    cout<<i2<<" NE\n";
                else
                    cout<<i1<<" NW\n";
            }
            else if((a+b+c+d)-(a+c+d)==0)
            {
                if(abs(nw)<=abs(se))
                    cout<<i3<<" SE\n";
                else
                    cout<<i4<<" NE\n";
            }
        }
        else
        {
            s=2;
            cout<<s<<endl;
            if(abs(sw)<=abs(nw))
                cout<<i4<<" NE\n";
            else
                cout<<i1<<" SW\n";
            if(abs(se)<=abs(ne))
                cout<<i2<<" NE\n";
            else
                cout<<i3<<" SW\n";
        }
    }
    return 0;
}
