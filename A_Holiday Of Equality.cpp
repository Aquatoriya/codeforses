

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, maxc, s, k;
  cin >> n;
  maxc = 0;
  s = 0;
  vector <int> a(n);
  for (int i=0;i<n;i++) {
    cin >> a[i];
    maxc = max(a[i], maxc);
  }
  for (int i=0;i<n;i++){
    k = maxc - a[i];
    s = s+k;
  }
  cout << s << endl;
}
