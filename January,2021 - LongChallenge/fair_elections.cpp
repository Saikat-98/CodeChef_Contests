#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define vi vector<int>
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
    int n, m;
    cin >> n >> m;
    int first[n], second[m];
    long long sum_first = 0, sum_second = 0;
    for (int i = 0; i < n; i++)
    {
      int val;
      cin >> val;
      first[i] = val;
      sum_first += val;
    }
    sort(first, first + n);
    for (int i = 0; i < m; i++)
    {
      int val;
      cin >> val;
      second[i] = val;
      sum_second += val;
    }
    sort(second, second + m);

    int i = 0, j = m - 1, swaps = 0;

    while (sum_second >= sum_first && i < n && j >= 0)
    {
      int diff = second[j] - first[i];
      sum_first += diff;
      sum_second -= diff;
      swap(first[i++], second[j--]);
      swaps++;
    }
    if (sum_second >= sum_first)
      cout << "-1\n";
    else
      cout << swaps << "\n";
  }
}

int32_t main()
{
  fastIO();
  solve();

  return 0;
}