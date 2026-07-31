/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 967B - Watering_System
 * Link: https://codeforces.com/contest/967/problem/B
 * Submission ID: 381878982
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: math, sortings
 * Submitted At: Thu, 09 Jul 2026 16:24:09 GMT
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl &#39;\n&#39;
const int N = 1e5+10;

void boom()
{
    int n; cin >> n;
    int a; cin >> a;
    int b; cin >> b;
    int ans = 0;
    ll sum = 0;
    vector<int>v(n-1);
    int st; cin >> st;
    sum += st;
    for (int i=0;i<n-1;i++){
        cin >> v[i];
        sum += v[i];
    }
    // cout << sum << endl;

    sort(all(v), greater<int>());
    for (int i=0;i<n-1;i++){
        ll x = (st*a)/sum;
        // cout << x << " ";
        if(x>=b) break;
        sum -= v[i];
        ans++;
    }
    // cout << sum << endl;
    cout << ans << endl;


}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}