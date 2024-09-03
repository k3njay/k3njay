#include <iostream>
#include<string.h>
using namespace std;
int main() {
 string s;
 cin>>s;
 int l=s.length();
  for(int i=0;i<l;i++){
    for(int j=0;j<l;j++){
      if (s[j]>s[j+1])
      swap(s[j],s[j+1]);
    }
  }
  for(int i=0;i<l;i++){
    for(int j=i+1;j<l;j++){
      if (s[j]==s[i])
      {
        s.erase(j,1);
      }
    }
  }
  cout<<s;
}
void swap(char *a,char *b){
  char c;
  c=*a;
  *a=*b;
  *b=c;
};