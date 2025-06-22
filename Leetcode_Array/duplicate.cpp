// #include<iostream>
// using namespace std;
// template<class obj>
// class job{
//   public:obj v;
//   job(obj val){
//     v=val;
//     cout<<"value"<<v;
//   }
// };
// int main(){
//   job<int>j(18);
// }
//..........................................................


#include<iostream>
using namespace std;
template<class obj>
class job{
  obj1 v1;
  obj2 v2;
public:job(obj1 val1,obj2 val2)
  {
    v1=val;
    v2=val2;
cout<<"value"=<<v1+v2;
}
show(){
  cout<<"value of v1"<<v1<<"\n";
  cout<<"value of v2"<<v2;
}
};
int main(){
  job<float,int>j(18.3,3);
  j.show();
}