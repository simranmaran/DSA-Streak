#include<iostream>
using namespace std;
class Student{
public:
  string Name;
  string City;
  int Roll_num;
  double sallary;
};
int main(){
   Student st1, st2;
  st1.Name="sakshi";
  st1.City="sakshi Dhaba";
  st1.Roll_num=51;
  st1.sallary=50000;

  st2.Name="sheetal";
  st2.City="kolar";
  st2.Roll_num=51;
  st2.sallary=50000;
  cout<<"the name of the student is:"<<st1.Name<<" "<<st1.City<<" "<<st1.Roll_num<<" "<<st1.sallary<<endl;
  cout<<st2.Name<<" "<<st2.City<<" "<<st2.Roll_num<<" "<<st2.sallary;
  return 0;

}