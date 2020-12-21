#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define tz(x) __builtin_ctzll(x)
#define lz(x) __builtin_clzll(x)
#define fsetbit(x) ffsll(x)
#define mod 1000000007
#define inf 1e18
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define debug(x, val) cout << "The value of " << x << " is: " << val << "\n";
#define op(x) cout << x << "\n";
void fastIO()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve()
{
  w(t)
  {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int index = 0; index < n; index++)
    {
      if (str.at(index) == '1')
        count++;
    }
    double output = ((120 - n) + count) / 1.2;
    if (output >= 75)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

int main()
{
  fastIO();
  solve();
  return 0;
}
