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
    string str;
    cin >> str;
    if ((str.length() % 2) != 0)
      cout << "-1\n";
    else
    {
      int oneCount = 0, zeroCount = 0;
      for (int i = 0; i < str.length(); i++)
      {
        if (str.at(i) == '1')
          oneCount++;
        else
          zeroCount++;
      }
      if (oneCount > 0 && zeroCount > 0)
      {
        int diff = abs(oneCount - zeroCount);
        if (diff == 0)
          cout << "0\n";
        else
          cout << diff / 2 << "\n";
      }
      else
        cout << "-1\n";
    }
  }
}

int main()
{
  fastIO();
  solve();
  return 0;
}
