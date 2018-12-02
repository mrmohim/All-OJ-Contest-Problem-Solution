#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>

#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;

int countPalindrome(char *str)
{
	int i,j,k,count=0;
	for(i=0;str[i];i++)
	{
		k=i-1;j=i+1;  //count odd length palindromes
		while(k>=0 && str[j] && str[k]==str[j])
		{
			++count;
			k--;j++;
		}

		k=i;j=i+1; //count even length palindrome
		while(k>=0 && str[j] && str[k]==str[j])
		{
			++count;
			k--;j++;
		}
	}
	return count;
}
char ch[1000];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    cin>>ch;
    cout<<countPalindrome(ch);
    return 0;
}
