#include <iostream>
void func(int *a,int len)
{
  while(len--)
    {
   std::cout <<*a;
      a++;
    }
};
int main() {
  int a[5]={1,2,3,4,5};
  func(a,sizeof(a)/sizeof(int));n
  
  
}