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
            if((x>0 || x<0) && y==0)
            {
                if(x>0)
                    a=1;
                else
                    b=1;
                if(abs(x)>=sw)
                {
                    sw=x;
                    i1=i;
                }
            }
            else if((y>0 || y<0) && x==0)
            {
                if(y>0)
                    c=1;
                else
                    d=1;
                if(abs(y)>=se)
                {
                    i2=i;
                    se=y;
                }
            }
        }
        if((a+b+c+d)<=2)
        {
            s=1;
            cout<<s<<endl;
            if(abs(sw)>=se)
            {
                if(sw>0 && se<0)
                    cout<<i1<<" SW\n";
                else if(sw>0 && se>0)
                    cout<<i1<<" NW\n";
                else if(sw<0 && se<0)
                    cout<<i1<<" SE\n";
                else if(sw<0 && se>0)
                    cout<<i1<<" NE\n";
            }
            else
            {
                if(sw>0 && se<0)
                    cout<<i2<<" NE\n";
                else if(sw>0 && se>0)
                    cout<<i2<<" SE\n";
                else if(sw<0 && se<0)
                    cout<<i2<<" NW\n";
                else if(sw<0 && se>0)
                    cout<<i2<<" SW\n";
            }
        }
        /*else if((a+b+c+d)==3)
        {
            s=2;
            cout<<s<<endl;
            if(abs(sw)>=se)
            {
                if(sw>0 && se<0)
                    cout<<i1<<" SW\n"<<i2<<" NW\n";
                else if(sw>0 && se>0)
                    cout<<i1<<" NW\n"<<i2<<" SW\n";
                else if(sw<0 && se<0)
                    cout<<i1<<" SE\n"<<i2<<" NE\n";
                else if(sw<0 && se>0)
                    cout<<i1<<" NE\n"<<i2<<" SE\n";
            }
            else
            {
                if(sw>0 && se<0)
                    cout<<i2<<" NE\n"<<i1<<" NW\n";
                else if(sw>0 && se>0)
                    cout<<i2<<" SE\n"<<i1<<" SW\n";
                else if(sw<0 && se<0)
                    cout<<i2<<" NW\n"<<i1<<" NE\n";
                else if(sw<0 && se>0)
                    cout<<i2<<" SW\n"<<i1<<" SE\n";
            }
        }*/
        else
        {
            s=2;
            cout<<s<<endl;
            if(abs(sw)>=se)
            {
                if(sw>0 && se<0)
                    cout<<i1<<" NW\n"<<i2<<" NW\n";
                else if(sw>0 && se>0)
                    cout<<i1<<" SW\n"<<i2<<" SW\n";
                else if(sw<0 && se<0)
                    cout<<i1<<" NE\n"<<i2<<" NE\n";
                else if(sw<0 && se>0)
                    cout<<i1<<" SE\n"<<i2<<" SE\n";
            }
            else
            {
                if(sw>0 && se<0)
                    cout<<i2<<" NW\n"<<i1<<" NW\n";
                else if(sw>0 && se>0)
                    cout<<i2<<" SW\n"<<i1<<" SW\n";
                else if(sw<0 && se<0)
                    cout<<i2<<" NE\n"<<i1<<" NE\n";
                else if(sw<0 && se>0)
                    cout<<i2<<" SE\n"<<i1<<" SE\n";
            }
        }
    }
    return 0;
}
