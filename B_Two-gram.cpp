#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_cnt = 0;
    string res = "aa";
    for(int i = 0; i < n - 1; i++) {
        int cnt = 0;
        for(int j = 0; j < n - 1; j++) {
            if(s[i] == s[j] && s[i+1] == s[j+1]) {
                cnt++;
            }
        }
        if(cnt > max_cnt) {
            res[0] = s[i];
            res[1] = s[i+1];
            max_cnt = cnt;
        }
    }

    cout << res << endl;
}
