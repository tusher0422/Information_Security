#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
   if(a==0)
   return b;
   else 
   return gcd(b,a%b);
}

int main() {
    int a,b; 
    cout<<"Enter value of a & b: ";
    cin>>a>>b;
    cout << "GCD of "<<a <<" and "<<b<<" is: "<<gcd(a,b)  <<endl;
    return 0;
}
