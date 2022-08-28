#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << __builtin_popcount(n) << ' ' << __builtin_clz(n);
    return 0;
}
