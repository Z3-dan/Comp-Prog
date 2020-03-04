#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, temp, min, max;
    vector<long long int>A;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    min = A[0];
    max = A[0];
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] < min) min = A[i];
        if(A[i] > max) max = A[i];
    }
    cout << max << " " << min << endl;
}
