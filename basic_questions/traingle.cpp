#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter the number=";
  cin>>a>>b>>c;
  if(a+b>c){
    cout<<"Triangle is possible";
  }
  else if(b+c>a){
    cout<<"Triangle is possible";
  }
else if(c+a>b){
  cout<<"Triangle is possible";
}
else{
  cout<<"Triangle is not possible";
}
}