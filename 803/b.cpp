#include <iostream>

using namespace std;

void solve(){
    int n, cnt = 0, k;
    cin >> n >> k;
    int a[1000001];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++){
        if (i > 0 && i + 1 != n){
            if (a[i] > a[i-1] + a[i+1]){
                cnt++;
                //printf("%d %d %d\n", a[i-1], a[i], a[i+1]);
            }
        }
    }
    k == 1 ? cout << (n - 1) / 2 : cout << cnt;
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
