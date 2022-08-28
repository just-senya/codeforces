#include <iostream>

using namespace std;

void solve(){
    int n, ptr1, ptr2, ans;
    cin >> n;
    ptr1 = ptr2 = -1;
    int a[n+1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            ptr1 = i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--){
        if (a[i] == 0){
            ptr2 = i;
            break;
        }
    } 
    ans = (ptr2+1) - (ptr1-1); 
    if (ptr1 == -1)
        ans = 0;
    cout << ans << endl;;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
