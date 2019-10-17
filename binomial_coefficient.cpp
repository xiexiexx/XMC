#include <iostream>

using namespace std;

int main()
{
  uint64_t n, k, value;
  cin >> n >> k;
  if (n < k)
    return 0;
  if (k > n / 2)
    k = n - k;
  value = 1;
  for (uint64_t i = 1; i <= k; ++i)
    value = (value * (n - k + i)) / i;
  cout << value << endl;
  value = 1;
  uint64_t d = n - k + 1;
  for (uint64_t i = 1; i <= k; ++i)
    value = (value * d++) / i;
  cout << value << endl;
  return 0;
}
