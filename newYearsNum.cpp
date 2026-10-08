#include<iostream>
using namespace std;


void solve(){
  long long int n,y;
  cin>>n;
  for (int i = 0; i <= 1000; i++)
  {
    y=n-(2020*i);
    if(y<0) break;
    else if(y%2021==0){
      cout<<"YES"<<endl;
      return;
    }
    else continue;
  }
  cout<<"NO"<<endl;
}

int main(){

  int t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  
  return 0;
}