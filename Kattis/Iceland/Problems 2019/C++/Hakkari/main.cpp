#pragma GCC optimize("Ofast","unroll-loops")
#pragma GCC target("avx2,fma")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m, bombs = 0;
    char area[110][110];
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char point;
            cin >> point;
            if(point == '*') bombs++;
            area[j][i] = point;
        }
    }
    cout << bombs << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(area[j][i] == '*') cout << i+1 << " " << j+1 << endl;
        }
    }
}
