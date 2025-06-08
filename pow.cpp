#include<iostream>
using namespace std;
int power(int b, int p){
if(p==0)
{
return 1 ; 
}
if(b==1)
{
return 1;
}
int k;
k=b*power(b,p-1);
return k;
}
int main()
{
 int b,p;
 cout<<"enter num base\n";
 cin>>b;
 cout<<"enter num pow\n";
 cin>>p;
cout<<power(b,p);
}