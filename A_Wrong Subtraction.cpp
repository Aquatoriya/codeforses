#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    for (int i; i<k;i++) {
        if (n%10>0) {
         n--;
        } else {
         n=n/10;
        }
 }
    cout <<n<<" ";
}
