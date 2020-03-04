#include <bits/stdc++.h>

using namespace std;

int n, a;
int A[100010];
int mem[100010];

int dp(int at)
{
    if(at >= n) return 0;
    if(mem[at] != -1) return mem[at];
    return mem[at] = max(A[at] + dp(at + 2), dp(at + 1));
}

int main()
{
    memset(mem, -1, sizeof(mem));
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        A[i] = a;
    }

    cout << dp(0) << endl;
}
