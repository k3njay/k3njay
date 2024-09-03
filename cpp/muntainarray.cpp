#include <iostream>
using namespace std;
int main() {
  int n,k=0,max=0,m=0;
  cin>>n;
int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n/2;i++)
    {
      if(a[i+1]==a[i]+1)
        k++;
      else
        k=0;
      if(k>max)
      {
        m=i-k+1;
        max=k;
      }
    }

  for(int i=m+max;i<n/2;i++)
  {
    a[i]=a[i-1]+1;
  }
  for(int i=m-1;i>=0;i--){
    a[i]=a[i+1]-1;
  }
  
  for(int i=n/2+2;i<n/2;i++)
  {
    if(a[i+1]==a[i]-1)
      k++;
    else
      k=0;
    if(k>max)
    {
      m=i-k+1;
      max=k;
    } 
  }
  
  for(int i=m+max;i<n;i++)
    {
      a[i]=a[i-1]+1;
    }

  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";
  } 
}