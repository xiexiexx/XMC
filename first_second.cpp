#include <iostream>
#include <vector>
#include <utility>

using namespace std;

template <typename T>
void first_second(const vector<T>& V)
{
  if (V.size() < 2)
    return;
  pair<size_t, size_t> largest {0, 1};
  if (V[0] < V[1])
    largest = {1, 0};
  for (size_t i = 2; i < V.size(); ++i)
    if (V[largest.first] < V[i])
      largest = {i, largest.first};
    else if (V[largest.second] < V[i])
      largest.second = i;
  cout << V[largest.first] << endl << V[largest.second] << endl;
}

int main()
{
  vector<int> A {17, 42, 23, 42, 13};
  first_second(A);
  vector<int> B {1, 4, 3, 2, 5};
  first_second(B);
  return 0;
}
