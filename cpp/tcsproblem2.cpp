#include <iostream>
#include <math.h>
using namespace std;
int main() {
int a,b,c,co=0,i=0,j=0,d,k,v,x=0;  
cin>>a>>k;
  b=k;
  v=k;
  while(k!=0){
    j++;
    k>>=1;
  }
 for(j=j+0;j>0;j--)
    {
      c=a^b;
      if(c>co)
      {
        co=c;
      }
      d=b&1;
      b>>=1;
      b=b+d*pow(2,j-1);
    }
  while(x!=co)
    {
      x=a^v;
      d=b&1;
      v>>=1;
      v=v+d*pow(2,j-1);
      i++;
    }
  cout<<i<<" "<<co;
  
}