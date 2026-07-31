/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1201A - Important_Exam
 * Link: https://codeforces.com/contest/1201/problem/A
 * Submission ID: 383632006
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: implementation, strings
 * Submitted At: Mon, 20 Jul 2026 21:41:19 GMT
 */

#include <bits/stdc++.h>using namespace std; #define ll long long#define endl '\n'const int N = 1e5+10; int main(){    ios::sync_with_stdio(false);    cin.tie(nullptr);     int n; cin >> n;    int m; cin >> m;    vector<string> s(n);    vector<int> a(m);    for (auto &ss:s) cin >> ss;    for (auto &x:a) cin >> x;    ll ans = 0;    for(int i=0;i<m;i++){        map<char, int> mp;        for (int j=0;j<n;j++){            mp[s[j][i]]++;        }        int mx = 0;        for (auto xp:mp){            mx = max(mx, xp.second);        }        ans+=(mx*a[i]);    }    cout << ans << endl;     return 0;}