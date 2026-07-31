#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int t = x-y;
    if ((t > 0 && t <= 3) || ((t < 0 && t >= -2))) {
        cout << &#34;Yes\n&#34;;
    }else {
        cout << &#34;No\n&#34;;
    }
    return 0;
}