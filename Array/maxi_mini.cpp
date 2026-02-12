#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter the size of aarray"<<endl;
  cin>>size;
  
  int arr[size];
  cout<<"enter the elements of array"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<size;i++){
      if(arr[i]>max){
        max=arr[i];
      }
      if(arr[i]<min){
        min=arr[i];
      }
    }
    cout<<"maximum element is "<<max<<endl;
    cout<<"minimum element is "<<min<<endl;

}