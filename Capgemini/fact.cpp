#include<iostream>
using namespace std;
int main(){
  int n,fact;
  cout<<"Enter the fact num=";
  cin>>n;
  fact=1;
  while(n>=1){
    fact=fact*n;
    n--;
  }
  cout<<"the fact of the num is="<<fact;
  return 0;
  
  
}