#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n, 1);

  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  std::sort(a.begin(), a.end());
  for (auto i : a) {
    std::cout << i << " ";
  }
}
void solution() {
  int n;
  std::cin >> n;
}
int stack1();

int main() {
  solve();
  return 0;
}

int stack1() { return 0; }
