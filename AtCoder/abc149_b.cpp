#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    if (k <= a) {
        a -= k;
    } else {
        k -= a;
        a = 0;
        b = max(0LL, b - k);
    }

    cout << a << &#34; &#34; << b << endl;
    return 0;
}
