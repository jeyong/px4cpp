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
        void cal(const int s) { s++; }
        //void calculate2() const { x = 2; }
};

int main() 
{
    Base b;
    b.calculate();
    return 0;
}