#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m, minc, maxc;
  cin >> n >> m;
  minc = (n/2)+(n%2);
  maxc = n;
  for (int i=minc;i <= maxc; i++) {
    if (i%m == 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}
