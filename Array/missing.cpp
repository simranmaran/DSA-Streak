//find the missing number of the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v={1,2,3,5,6,7};
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<",";
  if(v[i]!=i+1){
    cout<<"it is the missing number"<<endl;
    cout<<i+1<<endl;
    break;
  }
  }
}