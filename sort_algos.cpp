#include <iostream>
void st(int [] , int);
int main() {
  std::cout << "Hello World!\n";
  std::cout<<"enter the number of elements\n";
  int n;
  std::cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    std::cin>>a[i];
  }
  st(a,n+1);
  for(int i=0;i<n+1;i++){
    std::cout<<a[i]<<" ";
  }
}
void st(int a[],int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}