#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
  string a;
  cin>>a;
  std::sort(a.begin(),a.end());
  cout<<a;
int score=0;
  for(int i=0;i<a.size();i++){
    score+=(a[i]-96)*(i+1);
  }
  cout<<score;
}