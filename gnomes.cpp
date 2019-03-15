// A greedy algorithm is sufficient.
// We want to insert gnomes in increasing order and at the least possible
// index. If the current gnome is less than the gnome to insert, it is
// better to move on and insert ours later.

#include <iostream>
#include <set>
using namespace std;

int n, m;
int a[100010];
bool used[100010];

int main() {
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    used[a[i]] = 1;
  }

  int gi = 0; // gnome index
  for(int i = 1; i <= n; i++) {
    while(i >= a[gi] && gi < m) {
       cout << a[gi] << endl;
       gi++;
    }
    if(!used[i])
      cout << i << endl;
  }

  return 0;
}
