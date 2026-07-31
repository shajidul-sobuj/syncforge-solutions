#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
const int N = 1e5+10;

void boom()
{
    ll n; cin >> n;
    ll k; cin >> k;
    vector<ll> a(n);
    for (auto &x:a) cin >> x;
    sort(all(a));

    auto ok = [&](ll md){

        int count = 0;
        for (ll i=n/2;i<n;i++){
            if(md>a[i])
                count += (md-a[i]);

            // cout << md << " " << count << endl;
            if(count>k) return false;
        }
        return true;
    };


    ll l=a[n/2],r=2e9,ans;
    while(l<=r){
        ll mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }else {
            r = mid-1;
        }
    }
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