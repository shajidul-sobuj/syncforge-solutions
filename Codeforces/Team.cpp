#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;

void boom()
{
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3,0));
    int ans = 0;
    for (int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];

        int sum = (a[i][0]+a[i][1]+a[i][2]);
        if (sum >= 2) ans++;
    }
    cout << ans << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) boom();
    return 0;
}