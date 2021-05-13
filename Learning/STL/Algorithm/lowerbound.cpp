#include <iostream>
#include <algorithm>
#include <vector>

#define all(V) V.begin(), V.end()
using namespace std;

bool compare(int a, int b)
{
  return a <= b;
}
int main()
{
  vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

  vector<int>::iterator it;

  int money;

  cin >> money;

  while (money > 0)
  {
    it = lower_bound(all(v), money, compare) - 1;

    cout << (*it) << " ";

    money -= (*it);
  }
  return 0;
}