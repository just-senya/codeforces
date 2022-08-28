#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long
using namespace std;

ll f(int n){
    ll mod = 998244353;
    ll res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
        res %= mod;
    }
    return res;
}

void solve(){
    int n;
    ll mod = 998244353;
    ll ans = 0, cur, tmp;
    cin >> n;
    if (n % 2 == 1){
        cout << 0 << endl;
        return;
    }
    cur = f(n / 2);
    ans = (cur * cur) % mod;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
