// Given a list of items with their weights and values
// Find the maximum value one can obtain with a total weight limit
// Time complexity: O(nw)
// Problem link: https://cses.fi/problemset/task/1158

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;

const int INF = 1e9;
const ll LINF = 1e18;
ll positiveModulo(ll dividend, ll divisor)
{
    return (dividend % divisor + divisor) % divisor;
}

void solve()
{
    int n;
    int k;
    cin >> n >> k;

    vector<ll> vc(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }

    ll MOD = 1e9 + 7;
    ll pos = 0;

    ll maxSum = 0;     // Initialize the maximum sum as the first element
    ll currentSum = 0; // Initialize the current sum as the first element

    for (int i = 0; i < vc.size(); ++i)
    {
        pos += vc[i];
        currentSum = max(vc[i], currentSum + vc[i]);
        maxSum = max(maxSum, currentSum);
    }
    // cout<<maxSum<<endl;
    ll bcha = 0;

    bcha = pos - maxSum;

    for (int i = 0; i < k; i++)
    {
        maxSum = (maxSum + maxSum) % MOD;
    }

    ll final = (bcha + maxSum);
    ll ans;

    if (final < 0)
        ans = positiveModulo(final, MOD);
    else
        ans = final;

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // if (!freopen("input.txt", "r", stdin))
    // {
    //     cout << "Input file not found\n";
    // }
    // if (!freopen("output1.txt", "w", stdout))
    // {
    //     cout << "Output file not found\n";
    // }

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}