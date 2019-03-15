// There are two approaches to solve this. One is using dynamic programming.
// The other approach is to notice that after reversing the string and
// swapping all the 0s and 1s, the procedure is equivalent to subtracting 1 from
// binary numbers.

#include <iostream>
using namespace std;

char s[32];

int main() {
  int sum = 0;
  cin >> s;
  
  for(int i = 0; s[i] != '\0'; i++) {
    if(s[i] == '0') sum += 1 << i;
  }

  cout << sum << endl;
  return 0;
}
