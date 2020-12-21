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
    ll n, m;
    cin >> n >> m;
    vector<ll> vec;
    for (int i = 0; i < m; i++)
    {
      ll val;
      cin >> val;
      vec.emplace_back(n - (val % n));
    }
    sort(vec.begin(), vec.end());
    bool flag = false;
    for (int i = vec.size() - 1; i >= 0; i--)
      if (vec[i] < n)
      {
        cout << vec[i] << "\n";
        flag = true;
        break;
      }
    if (!flag)
      cout << "0\n";
  }
}

int main()
{
  fastIO();
  solve();
  return 0;
}
