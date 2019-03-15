// Fish is solved using a greedy algorithm. Starting from the smallest fish,
// we keep a cumulative sum and eat back whenever possible.

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0, size = 0;
  while(N--) {
    int x;
    cin >> x;

    if(x > size) {
      count++;
      size += x;
    }

    cout << count - 1 << endl;
  }

  return 0;
}
