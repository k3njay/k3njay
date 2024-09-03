#include<iostream>
using namespace std;
int main()
{
  int a[10];
  int i,j=0,k;
  for(i=0;i<10;i++)
    cin>>a[i];

  for(i=0;i<10;i++)
    {
      if(a[i]%2==0)
        j++;
    }
  for(i=0;i<10;i++)
    {
      for(k=i;k<10;k++)
        {
      if(a[i]%2==0)
        swap(a[i],a[k]);
     }
}
  for(i=0;i<10;i++)
    {
      cout<<a[i]<<" ";
    }
}