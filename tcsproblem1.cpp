#include <iostream>
using namespace std;
int main() {
  int n;
  int f=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
      {
       int a=0;
       int b=0;
       for(int k=0;k<n;k++)
           {
             if(arr[k]==arr[i])
               a++;
             if(arr[k]==arr[j])
               b++;
             if(a>=arr[j] && b>=arr[i])
             {
               f++;
              break; 
             }
           }
      }
  }
cout<<f;
}