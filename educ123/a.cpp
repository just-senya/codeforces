#include <iostream>
#include <string>

using namespace std;

bool solve(){
    string s;
    cin >> s;
    int ans[3] = {0, 0, 0};
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'r')
            ans[0]++;
        else if (s[i] == 'g')
            ans[1]++;
        else if (s[i] == 'b')
            ans[2]++;
        else if (s[i] == 'R')
            ans[0]--;
        else if (s[i] == 'G')
            ans[1]--;
        else if (s[i] == 'B')
            ans[2]--;
        if (ans[0] < 0 || ans[1] < 0 or ans[2] < 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve() == true ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
