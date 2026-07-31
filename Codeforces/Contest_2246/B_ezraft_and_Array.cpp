/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2246B - ezraft_and_Array
 * Link: https://codeforces.com/contest/2246/problem/B
 * Submission ID: 382272671
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: N/A | Tags: constructive algorithms, number theory
 * Submitted At: Sun, 12 Jul 2026 15:33:52 GMT
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
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if(n == 2) {
        cout << -1 << endl;
        return;
    }
    cout << 2 << " " << 4 << " " << 6 << " ";
    ll sum = 12;
    for (int i=4;i<=n;i++){
        cout << sum << " ";
        sum*=2;
    } 
    cout << endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}