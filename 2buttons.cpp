// A breadth first search on an implicit graph will solve this problem.
// In order for the algorithm to be sufficiently fast, we can prune negative
// numbers, as well as not doubling if we are already more than twice the target.

#include <iostream>
#include <queue>
using namespace std;

int dist[40010];

int bfs(int start, int seek) {
  queue<int> q;
  q.push(start);
  dist[start] = 0;

  while(!q.empty()) {
    int curr = q.front();
    q.pop();

    if(curr == seek)
      return dist[curr];

    if(curr <= 2 * seek && !dist[2*curr]) {
      q.push(2*curr);
      dist[2*curr] = dist[curr] + 1;
    }

    if(curr - 1 > 0 && !dist[curr - 1]) {
      q.push(curr - 1);
      dist[curr - 1] = dist[curr] + 1;
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  cout << bfs(n, m) << endl;
  return 0;
}
