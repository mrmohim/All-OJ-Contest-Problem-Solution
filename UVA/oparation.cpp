#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
/*long long i,j,n,m;
long long ch[200000000];
char ch1[100],ch2[100];*/
using namespace std;
FILE *file;
int main()
{
    file=fopen("output.txt","w");


    long long d[20], n, g,m;
    d[1] = d[2] = 9;
    for(int i = 3; i < 20; i += 2)
        d[i] = d[i+1] = d[i-1] * 10;
    for(g=1;g<=200000;g++)
    {
        n=g;
        long long x10 = 1;
        char s[64],c=',';
        for(int i = 1; i < 20; i++)
        {
            if(n > d[i])
            {
                n -= d[i];
            }
            else
            {
                n += x10 - 1;
                sprintf(s, "%lld", n);
                int j;
                for(j = 0; s[j]; j++)
                {
                    putchar(s[j]);
                    fprintf(file,"%c",s[j]);
                }
                if(i%2)	j--;
                for(j-- ; j >= 0; j--)
                {
                    putchar(s[j]);
                    fprintf(file,"%c",s[j]);
                }
                puts("");
                fprintf(file,"%c",c);
                break;
            }
            if(i%2 == 0)
                x10 *= 10;
        }
    }


    fclose(file);
    cout<<"m";
    while(scanf("%lld",&m)!=EOF && m!=0)
    {
        //cout<<ch[m]<<endl;
    }
    return 0;
}
