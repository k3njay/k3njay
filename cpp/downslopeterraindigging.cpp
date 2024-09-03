#include <iostream>

using namespace std;

int main() {
  int n;
  int days = 0;
  int mdays = 0;
  int dig;
  cin >> n;
  int l[n];
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
int k=1;
  
  for (int i = n-1; i > 0; i--) {

    while (l[i] >= l[i - 1]) {
      dig = 2 * k - 1;
      l[i] -= dig;
      days++;
       k++;
    }
    if (days > mdays)
      mdays = days;
  }

  
  cout << mdays;
}
