

#include<iostream>
using namespace std;
int main(){
  int arrr[10];
  int n=10;
  for(int i=0;i<n;i++){
    cout<<"enter the element of the array="<<i<<" ";
      cin>>arrr[i];
  }
  cout<<"printing the array are=";
  for(int i=0;i<n;i++){
    cout<<2*arrr[i]<<" ";
  }
}





#include<iostream>
using namespace std;
int main(){
  int arr[5];
  int n=5;
 int sum=0;
  for(int i=0;i<n;i++){
    cout<<"enter the element of the array="<<i<<" ";
    cin>>arr[i];
  }
  cout<<"the summ of the array is=";
  for(int i=0;i<n;i++){

    sum=sum+arr[i];
  }
   cout<<sum<<"";
}




#include<iostream>
using namespace std;
int main(){
  int arr[10];
  int n=5;
 int target=0;
  for(int i=0;i<n;i++){
    cout<<"enter the element of the array="<<i<<" ";
    cin>>arr[i];
  }
  cout<<"print the arrayy=";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"enter the target element=";
  cin>>target;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      cout<<"the target element found at index="<<i;
    }
  }
}
