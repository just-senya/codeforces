#include <iostream>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    int max_cur = 0, res = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        max_cur += a[i];
        if (max_cur > res)
            res = max_cur;
        if (max_cur < 0)
            max_cur = 0;
    }
    cout << res << endl;
    for (int i = 0; i < n; i++){
        
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
