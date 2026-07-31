/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 58A - Chat_room
 * Link: https://codeforces.com/contest/58/problem/A
 * Submission ID: 382564125
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: greedy, strings
 * Submitted At: Tue, 14 Jul 2026 14:09:22 GMT
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
    string s; cin >> s;
    stack<char> st;
    string t = "olleh";
    for (char c:t) st.push(c);
    for (int i=0;i<s.size();i++){
        if(!st.empty() && s[i] == st.top()) st.pop();
    }
    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";
    

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