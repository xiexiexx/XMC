#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> V {1, 2, 3, 4, 5};
  size_t n = V.size();
  for (size_t i = 0; i < n; ++i)
  {
    for (size_t j = n - i; j < n; ++j)
      cout << V[j] << ' ';
    for (size_t j = 0; j < n - i; ++j)
      cout << V[j] << ' ';
    cout << endl;
  }
  return 0;
}
