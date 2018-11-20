// g++ main.cpp -std=c++11
#include <iostream>
using namespace std;

class Base
{
    public:
        int x;
};


int main() 
{
    double a = 1;
    int b = 2;
    b = static_cast<int>(a);
    b = a;
    cout<<b<<endl;
    a = static_cast<double>(b);
    a = b;
    cout<<a<<endl;
}