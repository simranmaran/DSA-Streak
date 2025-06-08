#include<iostream>
using namespace std;
void table (int a, int n){
if(n>10)
{
return ;
}
int k;
k=a*n;
cout<<k<<"\t";
table(a,n+1);
}
int main()
{
 int a;
 cout<<"enter num\n";
 cin>>a;
table(a,1);
}


#include<iostream>
using namespace std;
int main(){
int a=1;
cout<<a--<<","<<a;
}
