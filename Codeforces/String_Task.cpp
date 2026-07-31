#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e6;


void boom(){
    string s; cin >> s;
    for (int i=0;i<s.size();i++){
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y'){

        }else {
            cout << '.';
            if(s[i]=='B') cout << 'b';
            else if(s[i]=='C') cout << 'c';
            else if(s[i]=='D') cout << 'd';
            else if(s[i]=='F') cout << 'f';
            else if(s[i]=='G') cout << 'g';
            else if(s[i]=='H') cout << 'h';
            else if(s[i]=='J') cout << 'j';
            else if(s[i]=='K') cout << 'k';
            else if(s[i]=='L') cout << 'l';
            else if(s[i]=='M') cout << 'm';
            else if(s[i]=='N') cout << 'n';
            else if(s[i]=='P') cout << 'p';
            else if(s[i]=='Q') cout << 'q';
            else if(s[i]=='R') cout << 'r';
            else if(s[i]=='S') cout << 's';
            else if(s[i]=='T') cout << 't';
            else if(s[i]=='V') cout << 'v';
            else if(s[i]=='W') cout << 'w';
            else if(s[i]=='X') cout << 'x';
            else if(s[i]=='Z') cout << 'z';
            else {
                cout << s[i];
            }
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while(t--) boom();
    return 0;
}