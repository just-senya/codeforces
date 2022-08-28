#include <iostream>
#include <string>

using namespace std;

int a[55][55];
void solve(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = 0;

    a[1][1] = a[2][2] = 1;
    a[1][2] = a[2][1] = 0;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (i <= 2 && j <= 2)
                continue;
            if (j <= 2){
                if (i % 2 == 1){
                    a[i][j] = (a[i-1][j] + 1) / 2;
                } else {
                    a[i][j] = (a[i-3][j] + 1) / 2;
                }
                continue;
            }

            if (j % 2 == 1){
                a[i][j] = (a[i][j-1] + 1) / 2;
            } else {
                a[i][j] = (a[i][j-3] + 1) / 2;
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
