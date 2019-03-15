#include <iostream>
using namespace std;

int n, a[16];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i];

  for(int bits = 0; bits < (1<<(n-1)); bits++) {
    int sum = 0;
    for(int i = 0; i < n; i++)
      if(bits & (1<<i)) sum += a[i];
      else sum -= a[i];
    if(sum % 360 == 0) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}
