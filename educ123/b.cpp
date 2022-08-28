#include <iostream>
#include <string>

using namespace std;

int* next(int n, int a[50]){
    int d = a[0];
    for (int i = 0; i < n - 1; i++){
        a[i] = a[i+1];
    }
    a[n - 1] = d;
    return a;
}

void solve(){
    int n, a[50];
    cin >> n;
    if (n == 3){
        printf("3 2 1\n1 3 2\n3 1 2\n");
        return;
    }
    for (int i = n; i > 0; i--){
        a[n - i] = i;
    }
    for (int i = 0; i < n; i++){
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
        int d = a[0];
        for (int j = 0; j < n - 1; j++){
            a[j] = a[j + 1];
        }
        a[n - 1] = d;
    //    a = next(a);
    }
}

int main(){
    int t;
    cin >> t;
    while (t){
        solve();
        t--;
    }

    return 0;
}
