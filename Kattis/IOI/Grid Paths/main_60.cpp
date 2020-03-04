#pragma GCC optimize("Ofast","unroll-loops")
#pragma GCC target("avx2,fma")

#include <bits/stdc++.h>

using namespace std;

int n;
char A[1010][1010];
int mem[1010][1010];

int dp(int x, int y)
{
    if(A[x][y] == '#' || x > n || y > n) return 0;
    if(x == n-1 && y == n-1) return 1;
    if(mem[x][y] != -1) return mem[x][y];
    return mem[x][y] = dp(x + 1, y) + dp(x, y + 1);
}

int main()
{
    memset(mem, -1, sizeof(mem));
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char point;
            cin >> point;
            A[j][i] = point;
        }
    }
    long long int ans = dp(0,0);
    cout << ans % 1000000007 << endl;
}
