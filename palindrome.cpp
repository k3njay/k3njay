#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int m=n;
  int k=0;
  while(m!=0)
    {
      int rem=m%10;
      k=k*10+rem;
      m=m/10;
    }
  cout<<k;
}