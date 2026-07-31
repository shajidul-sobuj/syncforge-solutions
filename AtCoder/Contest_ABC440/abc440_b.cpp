/*
 * AtCoder Auto Push - Synced Solution
 * 
 * Problem: abc440_b
 * Contest: ABC440
 * Link: https://atcoder.jp/contests/abc440/tasks/abc440_b
 * Submission ID: 72357275
 * Language: C++23 (GCC 15.2.0)
 * Execution Time: 1 ms
 * Submitted At: Sat, 10 Jan 2026 12:27:28 GMT
 */

#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n&#43;1);
    for (int i=1;i<=n;i&#43;&#43;){
        cin >> a[i];
    }
    int t=3;
    vector <int> v;
    v = a;
    sort(v.begin(),v.end());
    for (int i=1;i<=n;i&#43;&#43;){
        if (a[i]==v[1]) {
            cout << i << &#34; &#34;;
            break;
        }
    }
    for (int i=1;i<=n;i&#43;&#43;){
        if (a[i]==v[2]) {
            cout << i << &#34; &#34;;
            break;
        }
    }
    for (int i=1;i<=n;i&#43;&#43;){
        if (a[i]==v[3]) {
            cout << i << &#34; &#34;;
            break;
        }
    }
    return 0;
}