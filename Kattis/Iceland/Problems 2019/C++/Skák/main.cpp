#include <bits/stdc++.h>

using namespace std;

int main()
{
    int px,py,gx,gy;
    cin >> px >> py;
    cin >> gx >> gy;

    if(px == gx || py == gy) cout << 1 << endl;
    else cout << 2 << endl;
}
