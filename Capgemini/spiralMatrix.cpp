#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int left=0;
  int right=m-1;
  int top=0;
  int bottom=n-1;
  while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
      cout<<arr[top][i]<<" ";
    }
    top++;
    for(int i=top;i<=bottom;i++){
      cout<<arr[i][right]<<" ";
    }
    right--;
    if(top<=bottom){
      for(int i=right;i>=left;i--){
        cout<<arr[bottom][i]<<" ";
      }
      bottom--;
    }
    if(left<=right){
      for(int i=bottom;i>=top;i--){
        cout<<arr[i][left]<<" ";
      }
      left++;
    }
  }

}