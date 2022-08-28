#include <iostream>

using namespace std;
    
void solve(){
    long long n, s;
    cin >> n >> s;
    cout << s / (n * n) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
