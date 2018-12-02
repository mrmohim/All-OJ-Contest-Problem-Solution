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
int center_in_odd_position(char *str)
{
    int i,j = 0;
    int count = 0;
    int size = strlen(str);
    for( i = 0; i < size; i++)
    {
        for( j = 1; j <= min(i, size - i - 1); j++)
        {
            if(str[i-j] == str[i+j])
                count ++;
            else
                break;
        }
    }
    return count;
}
int center_in_even_position(char * str)
{
    int i, j = 0;
    int count = 0;
    int size = strlen(str);
    for( i = 0; i < size; i ++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if(str[i-j] == str[i+j+1])
                count ++;
            else
                break;
        }
    }
    return count;
}
int min(int a, int b)
{
    return ((a > b) ? b : a);
}
int getNumberOfPanindrom(char *str)
{
    return center_in_even_position(str) + center_in_odd_position(str);
}
int main()
{
    char *str= "aaaaaa";
    printf("hello world from panindrom!\n");
    printf("%s has %d panindrom\n",str, getNumberOfPanindrom(str));
}
