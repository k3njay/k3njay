#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char sorting(char a[]);
int main()
{
    char a[10][5];
    cin.getline(a,300,5);
    sort(a,a+10);
    char* ptr=&a[0][0];
    for(int i=0;i<10;i++)
    cout<<a[i]<<"\n";

}


