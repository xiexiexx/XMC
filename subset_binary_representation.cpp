#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  vector<int> V {1, 2, 3};
  size_t n = V.size();
  size_t m = pow(2, n);
  vector<bool> B(n + 1, false);
  for (size_t i = 0; i < m; ++i)
  {
    for (size_t k = 0; k < n; ++k)
      if (B[k])
        cout << V[k] << ' ';
    cout << endl;
    size_t k = 0;
    while (k < n && B[k])
      B[k++] = false;
    B[k] = true;
  }
  return 0;
}
