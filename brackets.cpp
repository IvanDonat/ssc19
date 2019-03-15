#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

char s[1000000];

int main() {
  cin >> s;

  stack<char> stk;
  
  int i;
  int n = strlen(s);
  for(i = 0; i < n; i++) {
    char c = s[i];
    if(c == '(' || c == '[' || c == '<' || c == '{')
      stk.push(s[i]);
    else {
      if(stk.size() == 0) {
         cout << "NO" << endl;
         return 0;
      }

      char exp = stk.top();
      stk.pop();
      if(exp == '(' && c == ')' ||
         exp == '[' && c == ']' ||
         exp == '<' && c == '>' ||
         exp == '{' && c == '}') continue;
       else {
         cout << "NO" << endl;
         return 0;
       }
    }
  }
  
  if(!stk.size())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
