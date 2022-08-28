#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    int n;
    ll ans = 0;
    cin >> n;
    int a[n+10];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int cnt = 1, mx = 1;
    for (int i = 1; i < n; i++){
        if (a[i] == a[i-1]){
            cnt++;
            if (i == n - 1 && mx < cnt)
                mx = cnt;
        }
        else {
            if (mx < cnt)
                mx = cnt;
            cnt = 1;
        }
    }
    if (mx == n){
        cout << 0 << endl;
        return;
    }
    n -= mx;
    if (mx == 1){
        ans += 2;
        mx = 2;
        n--;
    }
    while (n > 0){
        n -= mx;
        ans += 
    }
    //ans += ((n / 2) * 3 + (n % 2) * 2);
    cout << ans << endl;

}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
