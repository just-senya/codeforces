#include <iostream>
#include <string>

using namespace std;

void solve(){
    int n;
    long long ans = 0;
    string s;
    cin >> n >> s;
    int len = s.size();
    for (int i = 0; i < len; i++){
        if (s[i] == '0'){
            if (i + 1 < len && s[i+1] == '0')
                ans += 2;
            else if (i + 2 < len && s[i+1] == '1' && s[i+2] == '0')
                ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
