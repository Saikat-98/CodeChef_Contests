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
    string str;
    cin >> str;
    unordered_map<char, int> map;
    for (int i = 0; i < str.length(); i++)
    {
      if (map.find(str.at(i)) == map.end())
        map.insert(make_pair(str.at(i), 1));
      else
        map[str.at(i)] += 1;
    }
    int count = 0, excess = 0;
    for (auto i : map)
    {
      if (i.second >= 2)
        count += i.second / 2;
      else
        excess++;
    }

    // cout << excess << " " << count << endl;

    if (excess >= count)
      cout << count << "\n";
    else
    {
      cout << excess + ((count - excess) * 2 / 3) << "\n";
    }
  }
  return 0;
}