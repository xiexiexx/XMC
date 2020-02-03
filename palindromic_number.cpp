#include <iostream>

using namespace std;

// 适用于其他进制, 这里取10进制.
const int64_t b = 10;

bool palindromic_number(int64_t n)
{
  if (n < 0)
    return false;
  else if (n < b)
    return true;
  int64_t h = n;
  int64_t r = 0;
  while (h > b)
  {
    int64_t t = h / b;
    r = r * b + (h - t * b);
    h = t;
  }
  if (r <= numeric_limits<int64_t>::max() / b && r * b == n - h)
    return true;
  return false;
}

int main()
{
  cout << "max is " << numeric_limits<int64_t>::max() << endl;
  int64_t n;
  cin >> n;
  cout << (palindromic_number(n) ? "Y" : "N") << endl;
  return 0;
}
