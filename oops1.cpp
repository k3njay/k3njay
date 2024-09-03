#include <iostream>
using namespace std;
int main() {
class jackie{
  int a,b;
  public:
  jackie(int x,int y){
    a=x;
    b=y;
  }
  void display(){
    cout<<a<<endl<<b<<endl;
  }
};

  jackie j(10,20);
  j.display();
}