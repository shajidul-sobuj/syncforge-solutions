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
    vector<int> a(n/2);
    for (auto &x:a) cin >> x;
    sort(all(a));
    int ans1 = 0;
    int j = n;
    for (int i=a.size()-1;i>=0;i--){
        int x = a[i];
        ans1 += abs(j-x);
        j-=2;
        // cout << "ans: " << ans1 << " " << "x: " << x << " " << "j: " << j << endl;
    }   
    int ans2 = 0;
    int k = n-1;
    for (int i=a.size()-1;i>=0;i--){
        int x = a[i];
        ans2 += abs(k-x);
        // cout << "ans: " << ans2 << " " << "x: " << x << " " << "k: " << k << endl;
        k-=2;

    }   
    // cout << ans1 << " " << ans2 << endl;
    cout << min(ans1, ans2) << endl;

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