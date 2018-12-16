#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {    
  int x;
  cin >> x;
  vector <int> a;
  int i = 1;
  while (i<=x) {
    a.push_back(i);
    i*=2;
  }
  int cnt = 0;
  reverse (a.begin(), a.end());
  for (int n = 0; n < a.size(); n++) {
  	if (x >= a[n]) {
  		x -= a[n];
  		cnt++;
  	}
  }
  cout << cnt;
}
