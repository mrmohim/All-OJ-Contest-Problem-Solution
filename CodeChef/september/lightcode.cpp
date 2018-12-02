#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    double t,n,x,y,a1,a2,a3,a4,i1,i2,i3,i4,a,b,c,d,i;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&n);
        a1=a2=a3=a4=i1=i2=i3=i4=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lf%lf",&x,&y);
            if(x>=0 && y>0)
            {
                i1=1;
                if(a1<sqrt((x*x)+(y*y)))
                {
                    a1=(x*x)+(y*y);
                    a=i;
                }
            }
            else if(x>0 && y<=0)
            {
                i2=1;
                if(a2<sqrt((x*x)+(y*y)))
                {
                    a2=(x*x)+(y*y);
                    b=i;
                }
            }
            else if(x<=0 && y<0)
            {
                i3=1;
                if(a3<sqrt((x*x)+(y*y)))
                {
                    a3=(x*x)+(y*y);
                    c=i;
                }
            }
            else if(x<0 && y>=0)
            {
                i4=1;
                if(a4<sqrt((x*x)+(y*y)))
                {
                    a4=(x*x)+(y*y);
                    d=i;
                }
            }
        }


        if((i1+i2+i3+i4)==4)
        {
            printf("2\n");
            if(a3>=a2)
                printf("%.0lf NE\n",c);
            else
                printf("%.0lf SW\n",b);
            if(a4>=a1)
                printf("%.0lf NE\n",d);
            else
                printf("%.0lf SW\n",a);
        }


        else if((i1+i2+i3+i4)==3)
        {
            printf("2\n");
            if((i1+i2+i3)==3)
            {
                if(a1>=a3)
                    printf("%.0lf SE\n%.0lf SW\n",a,b);
                else
                    printf("%.0lf SE\n%.0lf NE\n",c,b);
            }
            else if((i2+i3+i4)==3)
            {
                if(a2>=a4)
                    printf("%.0lf SW\n%.0lf NW\n",b,c);
                else
                    printf("%.0lf SW\n%.0lf SE\n",d,c);
            }
            if((i1+i4+i3)==3)
            {
                if(a1>=a3)
                    printf("%.0lf NW\n%.0lf SW\n",a,d);
                else
                    printf("%.0lf NW\n%.0lf NE\n",c,d);
            }
            else if((i2+i1+i4)==3)
            {
                if(a2>=a4)
                    printf("%.0lf NE\n%.0lf NW\n",b,a);
                else
                    printf("%.0lf NE\n%.0lf SE\n",d,a);
            }
        }
        else if((i1+i2+i3+i4)==2)
        {
            printf("1\n");
            if((i1+i2)==2)
            {
                if(a1>=a2)
                    printf("%.0lf SW\n",a);
                else
                    printf("%.0lf NE\n",b);
            }
            else if((i2+i3)==2)
            {
                if(a2>=a3)
                    printf("%.0lf SW\n",b);
                else
                    printf("%.0lf NE\n",c);
            }
            else if((i4+i3)==2)
            {
                if(a3>=a4)
                    printf("%.0lf NW\n",c);
                else
                    printf("%.0lf SE\n",d);
            }
            else if((i1+i3)==2)
            {
                if(a1>=a3)
                    printf("%.0lf SW\n",a);
                else
                    printf("%.0lf NE\n",c);
            }
            else if((i1+i4)==2)
            {
                if(a1>=a4)
                    printf("%.0lf SW\n",a);
                else
                    printf("%.0lf NE\n",d);
            }
            else if((i2+i4)==2)
            {
                if(a2>=a4)
                    printf("%.0lf NW\n",b);
                else
                    printf("%.0lf SE\n",d);
            }
        }
    }
    return 0;
}
