#include <iostream>
#include <map>

using namespace std;

void solve(){
    int n, x;
    map<int, int> a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
    }
    if (a.size() > 3){
        cout << "NO\n";
        return;
    }
    for (auto it = a.begin(); it != a.end(); it++){
        if (a[it->first] != a[-it->first]){
            if (a.size() == 2 && a[it->first] + a[-it->first] == 3){
                cout << "YES\n";
                return;
            }
            for (auto i = a.begin(); i != a.end(); i++){
                if (i->first != it->first && (a[i->first] != a[-i->first] || a[i->first] != 1)){
                    if (a[i->first] == 0)
                        continue;
                    //printf("%d %d\n", i->first, it->first);
                    cout << "NO\n";
                    return;
                }
                if (i->first != it->first && (a[i->first] == a[-i->first] && a[i->first] == 1)){
                    cout << "YES\n";
                    return;
                }
                if (i->first != it->first){
                    ;//cout << "hre " << bool(a[i->first] == a[-i->first]) << ' ' << bool(a[i->first] == 1) << endl;
                }
                //cout << i->first << endl;
            }    
            cout << "was here\n";
        }
        if (a[it->first] > 2 || 
                (a[it->first] == 2 && a.size() == 3) ||
                (a[it->first] == 1 && a[0] == 0)){
            //cout << it->first << ' ' << a[it->first] << ' ' << a[-it->first] << endl;
            //printf("it->first %d a[it->first] %d a[-it->first] %d\n", it->first, a[it->first], a[-it->first]);
            cout << "NO\n";
            return;
        }
 
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
