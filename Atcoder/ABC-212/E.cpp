#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long dp[5002];
long long dp2[5002];
int main()
{
    int n, m, k;
    int mo = 998244353;
    cin >> n >> m >> k;
    vector<vector<int>> road(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        road[x].push_back(y);
        road[y].push_back(x);
    }
    dp[1] = 1LL;

    for (int i = 1; i <= k; ++i)
    {
        ll sum = 0;
        for (int j = 1; j <= n; ++j)
        {
            sum += dp[j];
        }
        for (int j = 1; j <= n; ++j)
        {
            dp2[j] = sum - dp[j];
            for (int l = 0; l < road[j].size(); ++l)
            {
                dp2[j] -= dp[road[j][l]];
            }
            dp2[j] %= mo;
        }

        for (int j = 1; j <= n; ++j)
        {
            dp[j] = dp2[j];
        }
    }
    cout << dp[1];
}