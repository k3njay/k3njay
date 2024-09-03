#include <iostream>
#include<math.h>
using namespace std;
int main(){
  cout<<"enter adp";
  float a1;
  cin>>a1;
  for(int t=700;t<801;t++)
    {
 double e=(-a1)*16022/(1.38064852*t);
  double f=exp(e)/1000000000000;
  cout<<f<<"\n";
}
}