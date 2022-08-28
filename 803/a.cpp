#include <iostream>

using namespace std;

void solve(){
    int n, a[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << a[0] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
