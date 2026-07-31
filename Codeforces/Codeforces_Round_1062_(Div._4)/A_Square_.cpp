/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2167A - Square_
 * Link: https://codeforces.com/contest/2167/problem/A
 * Submission ID: 382141569
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math, sortings
 * Submitted At: Sat, 11 Jul 2026 17:28:34 GMT
 */

#include <bits/stdc++.h>using namespace std; #define ll long long#define ull unsigned long long#define all(x) (x).begin(), (x).end()#define endl '\n'const int N = 1e5+10; void boom(){    int a,b,c,d; cin >> a >> b >> c >> d;    if (a == b && b == c && c == d) cout << "YES\n";    else cout << "NO\n"; }  int main(){    ios::sync_with_stdio(false);    cin.tie(nullptr);     int t = 1;    cin >> t;    while (t--)    {        boom();    }     return 0;}