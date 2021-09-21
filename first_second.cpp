#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
  vector<int> V {17, 42, 23, 42, 13};
  if (V.size() < 2)
    cout << "Only one element!" << endl;
  pair<size_t, size_t> largest {0, 1};
  if (V[0] < V[1])
    largest = {1, 0};
  for (size_t i = 2; i < V.size(); ++i)
    if (V[largest.first] < V[i])
      largest = {i, largest.first};
    else if (V[largest.second] < V[i])
      largest.second = i;
  cout << V[largest.first] << endl << V[largest.second] << endl;
  return 0;
}
