#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter size";
  cin>>size;
  int arr[size];
  cout<<"enter elements of array"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int start=0;
  int end=size-1;
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
  cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}