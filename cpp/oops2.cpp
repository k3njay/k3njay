#include <iostream>
void func(int *a,int *b)
{
  int j=*a;
  *a=*b;
  *b=j;
};
int main() {
  int a=10;
  int b=20;
  func(&a,&b);
  std::cout <<a<<b;
}