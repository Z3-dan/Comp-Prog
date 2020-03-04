#include <bits/stdc++.h>

using namespace std;

int n;
char A[1010][1010];
int numbs[1010][1010];
int mem[1010][1010];

int dp(int x, int y)
{
    if(A[x][y] == '#' || x < 0 || y < 0) return 0;
    if(x == 0 && y == 0) return numbs[0][0];
    numbs[x][y] = numbs[x+1][y] + numbs[x][y+1];
    if(mem[x][y] != -1) return mem[x][y];
    return mem[x][y] = dp(x - 1, y) + dp(x, y - 1);
}

int main()
{
    memset(numbs, -1, sizeof(numbs));
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

    unsigned long long int ans = dp(n-1,n-1) % 1000000007;
    cout << ans * (-1) << endl;
}
