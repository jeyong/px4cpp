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
    double a = 1.1;
    int b = 2;
    b = static_cast<int>(a);
    cout<<"a: " << a<<endl;
    cout<<"b=a: " << b<<endl;

    a = static_cast<double>(b);
    cout<<"b: " << b<<endl;
    cout<<"a=b: " << a<<endl;

}