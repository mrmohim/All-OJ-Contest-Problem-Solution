#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int N,sum = 0;
        cin >> N;
        cout << "Case " << t << ":\n";
        for(int i = 0; i < N; i++)
        {
            string str;
            int k;
            cin >> str;
            if(str == "report")
            {
                cout << sum << "\n";
                continue;
            }
            cin >> k;
            if(str == "donate")sum+=k;
        }
    }
    return 0;
}
