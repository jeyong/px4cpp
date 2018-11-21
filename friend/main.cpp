// g++ main.cpp -std=c++11
#include <iostream>
using namespace std;

class Base {
private:
   char ch='A';
   int num = 11;
public:
    //Top class는 Base의 친구. Top에서 Base의 private와 protected 멤버에 접근가능
   friend class Top;
};

class Top {
public:
   void disp(Base obj){
      cout<<obj.ch<<endl;
      cout<<obj.num<<endl;
   }
};

int main() {
   Base b;
   Top t;
   b.disp(t);
   return 0;
}
