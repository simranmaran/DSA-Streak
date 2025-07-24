#include<iostream>
using namespace std;
int Findlargest(int arr[],int n){
  int largest=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
return largest;
}
int main(){
  int arr[5]={4,6,8,9,6};
  int size=5;
  int result=Findlargest(arr,size);
  cout<<"Largest element in the array is: "<<result<<endl;
  return 0;
}
