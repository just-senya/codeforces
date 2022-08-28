#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

bool isF(ll n){
    ll fact = 1;
    for (int i = 2; fact <= ULONG_MAX; i++){
        if (n == fact)
            return true;
        fact *= i;
        if (fact > n)
            break;
    }
    return false;
}

ll closeF(ll n){
    ll k = 1, p;
    int i = 1;
    for (i = 2; k < n; i++){
        p = k;
        k *= i;
        if (k >= n){
            k /= i;
            break;
        }
        else if (k == n)
            break;
        else if (k < 0)
            return p;
    }
    return k;
}

ll close(ll n){
    ll k = 1, p = 1;
    while (k < n && k > 0){
        p = k;
        k *= 2;
    }
    if (k < 0)
        return p;
    if (k == n)
        return k;
    return k / 2;
}

void solve(){
    ll n, k = 0;
    cin >> n;
    while (n > 0){
        cout << max(close(n), closeF(n)) << ' ';
        n -= max(close(n), closeF(n));
        k++;
        if (n < 0){
            cout << -1 << endl;
            return;
        }
    }
    cout << k << endl;
}

int main(){
    ll t;
    ll k = 2048;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
