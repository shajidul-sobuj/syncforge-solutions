/*
 * AtCoder Auto Push - Synced Solution
 * 
 * Problem: abc442_a
 * Contest: ABC442
 * Link: https://atcoder.jp/contests/abc442/tasks/abc442_a
 * Submission ID: 72694806
 * Language: C++23 (GCC 15.2.0)
 * Execution Time: 2 ms
 * Submitted At: Sat, 24 Jan 2026 12:15:39 GMT
 */

#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0;i<s.size();i&#43;&#43;)
    {
        if(s[i]==&#39;i&#39;|| s[i]==&#39;j&#39;) count&#43;&#43;;
    }
    cout << count << endl;
    return 0;
}