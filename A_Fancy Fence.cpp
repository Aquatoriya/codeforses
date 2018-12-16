#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  double t, a, n, b;
  cin >> t;
  for (int i = 1; i <= t; i ++) {
    cin >> a;
    b = 0;
    n = 2;
    while (b < a) {
      n++;
      b = (180*(n-2))/n;
    }
    if (b==a){
      cout << "YES" << endl;
    } else{
      cout << "NO" << endl;
    }
  }
}
