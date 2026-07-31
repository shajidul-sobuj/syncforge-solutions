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