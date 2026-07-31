/*
 * AtCoder Auto Push - Synced Solution
 * 
 * Problem: abc297_a
 * Contest: ABC297
 * Link: https://atcoder.jp/contests/abc297/tasks/abc297_a
 * Submission ID: 72630106
 * Language: C++23 (GCC 15.2.0)
 * Execution Time: 1 ms
 * Submitted At: Wed, 21 Jan 2026 14:21:20 GMT
 */

#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i=0;i<n;i&#43;&#43;)
    {
        cin >> a[i];
    }
    for (int i=0;i<n-1;i&#43;&#43;)
    {
        if (a[i&#43;1]-a[i]<=x)
        {
            cout << a[i&#43;1] << endl;
            return 0;
        }
    }
    cout << &#34;-1\n&#34;;

    return 0;
}