#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int b=0,x,i,d,s,n,m;
    float sum;
    char ch[100];
    while(gets(ch))
    {
        b+=1;
        d=0;
        s=0;
        x=strlen(ch);
        for(i=0; i<x; i++)
        {
            switch(ch[i])
            {
            case 'a':
            case 'A':
                s=s+1;
                break;
            case 'b':
            case 'B':
                s=s+2;
                break;
            case 'c':
            case 'C':
                s=s+3;
                break;
            case 'd':
            case 'D':
                s=s+4;
                break;
            case 'e':
            case 'E':
                s=s+5;
                break;
            case 'f':
            case 'F':
                s=s+6;
                break;
            case 'g':
            case 'G':
                s=s+7;
                break;
            case 'h':
            case 'H':
                s=s+8;
                break;
            case 'i':
            case 'I':
                s=s+9;
                break;
            case 'j':
            case 'J':
                s=s+10;
                break;
            case 'k':
            case 'K':
                s=s+11;
                break;
            case 'l':
            case 'L':
                s=s+12;
                break;
            case 'm':
            case 'M':
                s=s+13;
                break;
            case 'n':
            case 'N':
                s=s+14;
                break;
            case 'o':
            case 'O':
                s=s+15;
                break;
            case 'p':
            case 'P':
                s=s+16;
                break;
            case 'q':
            case 'Q':
                s=s+17;
                break;
            case 'r':
            case 'R':
                s=s+18;
                break;
            case 's':
            case 'S':
                s=s+19;
                break;
            case 't':
            case 'T':
                s=s+20;
                break;
            case 'u':
            case 'U':
                s=s+21;
                break;
            case 'v':
            case 'V':
                s=s+22;
                break;
            case 'w':
            case 'W':
                s=s+23;
                break;
            case 'x':
            case 'X':
                s=s+24;
                break;
            case 'y':
            case 'Y':
                s=s+25;
                break;
            case 'z':
            case 'Z':
                s=s+26;
                break;
            }
        }
        while(s!=0)
        {
            d+=(s%10);
            s/=10;
        }
        if(d>9)
            d=d%10+(d/10)%10;
        if(b%2==1)
            n=d;
        else
        {
            m=d;
            if(n>m)
                sum=(float)m*100/(float)n;
            else
                sum=(float)n*100/(float)m;
            printf("%.2f %%\n",sum);
        }
    }
    return 0;
}
