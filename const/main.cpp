// g++ main.cpp -std=c++11
#include <iostream>
using namespace std;

class Base
{
    public:
        int x;
        int y; 
    public:
        void calculate() { int sum = x + y; }
        //void cal(const int s) { s++; }  // const 상수 인자로 받았는데 이 상수 인자를 변경을 시도하므로 compile error 발생
        //void calculate2() const { x = 2; } // method const는 내부에서 properties의 변경을 시도하므로 compile error 발생
};

int main() 
{
    Base b;
    b.calculate();

    return 0;
}