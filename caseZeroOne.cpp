#include<iostream>
using namespace std;

int main(){
  int n;
  int cnt=0;
  char c;
  cin>>n;

  while (n--)
  {
    cin>>c;
    if (c=='1')
    {
      cnt++;
    }else{
      cnt--;
    }
    

  }
  cout<<abs(cnt);
  
  return 0;
}