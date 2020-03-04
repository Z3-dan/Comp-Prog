#include <bits/stdc++.h>

using namespace std;

int n;
long long mem[100000010];

long long fib(int n)
{
  if(n == 0) return 1;
  if(n == 1) return 1;
  if(mem[n] != -1) return mem[n];
  return mem[n] = fib(n-1) + fib(n-2);
}

int main()
{
  memset(mem, -1, sizeof(mem));
  while(cin >> n)
  {
    cout << fib(n) << endl;
  }
}
