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

int main()
{
  fastIO();
  w(t)
  {
    int n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (count < 0)
      {
        cout << "NO\n";
        break;
      }
      if (str1.at(i) == str2.at(i))
        continue;
      else
      {
        if (str1.at(i) == '1')
          count++;
        else
          count--;
      }
    }
    if (count >= 0)
    {
      if (count == 0)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  return 0;
}