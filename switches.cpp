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
