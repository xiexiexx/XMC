#include <iostream>
#include <vector>

using namespace std;

size_t mixed_radix(const vector<size_t> B, const vector<size_t> V)
{
  size_t value = 0;
  size_t n = V.size();
  for (size_t i = 0; i < n - 1; ++i)
    value = (value + V[i]) * B[i + 1];
  value += V[n - 1];   // A += V.back();
  return value;
}

int main()
{
  vector<size_t> B {10, 10, 6, 10, 6, 10};
  vector<size_t> V {1, 0, 1, 2, 1, 8};
  cout << mixed_radix(B, V) << endl;
  return 0;
}
