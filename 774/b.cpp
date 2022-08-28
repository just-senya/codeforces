#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

void solve(){
    int n, cnt = 0;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = a[0];
    bool res = false;
    for (int i = 1; i <= n / 2; i++){
        sum += a[i];
        sum -= a[n-i];
        if (i == n / 2 && n % 2 == 0)
            break;
        if (sum < 0){
            res = true;
            break;
        }
    }
    if (sum < 0)
        res = true;
    res ? cout << "Yes\n" : cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
