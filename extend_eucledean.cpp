#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter value of a & b: ";
  cin >> a >> b;
  int q, r, s1 = 1, s2 = 0, s, t1 = 0, t2 = 1, t;
  while (b != 0)
  {
    q = a / b;
    r = a % b;
    a = b;
    b = r;
    t = t1 - (q * t2);
    t1 = t2;
    t2 = t;
    s = s1 - q * s2;
    s1 = s2;
    s2 = s;
  }
  cout << "gcd :" << a << endl;
  cout << "s :" << s << " "
       << "t " << t << endl;
  return 0;
}
