#include <iostream>

using namespace std;

int main()
{
  vector<int> V {17, 62, 43, 52, 73};
  size_t r = 0;
  for (size_t i = 0; i < V.size(); ++i)
    if (V[i] % 2 == 1)
      V[r++] = V[i];
  V.resize(r);
  for (const auto& x : V)
    cout << x << ' ';
  cout << endl;
  return 0;
}
