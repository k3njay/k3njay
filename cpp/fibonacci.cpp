#include <iostream>
using namespace std;
int main() {
 int n;
  cin>>n;
  int fib=1;
  int prev1=1;
  int prev2=1;
  if(n==0 || n==1)
  {
    cout<<1;  
  }
  else{
  for(int i=2;i<n;i++)
    {
      fib=prev1+prev2;
      prev2=prev1;
      prev1=fib;
    }
    cout<<fib;
  }
}