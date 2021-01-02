#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<long long>
#define eb(x) emplace_back(x)
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
    int n, k;
    cin >> n >> k;
    vi v;
    for (int i = 0; i < n; i++)
    {
      int val;
      cin >> val;
      v.eb(val);
    }
    sort(v.begin(), v.end(), greater<int>());
    int count = 0, currSum = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
      if (currSum <= k)
        currSum += v[i], count++;

      if (currSum > k)
      {
        pos = i;
        break;
      }
    }

    currSum = 0;
    for (int j = pos; j < n; j++)
    {
      if (currSum <= k)
        currSum += v[j], count++;
    }

    if (count > 0)
      cout << count << "\n";
    else
      cout << "-1\n";
  }
}

int32_t main()
{
  fastIO();
  solve();

  return 0;
}