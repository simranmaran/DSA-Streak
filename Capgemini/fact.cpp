#include<iostream>
using namespace std;
int main(){
  int n,fact;
  cout<<"Enter the number=";
  cin>>n;
  fact=1;
  while(n>=1){
    fact=fact*n;
    n--;
  }
  cout<<"Fact is="<<fact;
  return 0;
}