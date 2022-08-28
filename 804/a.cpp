#include <iostream>

#define ll long long

using namespace std;

void solve(){
    long long n;
    ll a, b;
    cin >> n;
    if (n % 2 == 1){
        cout << -1 << endl;
        return;
    }
    if ((n / 2) % 2 == 1){
        printf("%lld %lld %lld\n", 1LL, 1LL, (n/2) - 1);
    }
    else {
        printf("%lld %lld %lld\n", 2LL, 2LL, 2 ^ (n / 2));
    }

}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
