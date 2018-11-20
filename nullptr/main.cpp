// g++ main.cpp -std=c++11

#include <iostream>
using namespace std;

class Base {
    public:
        int x;
};


void foo(int a)
{
    cout<<"void foo(int a)\n";
}


void foo(Base* b)
{
    cout<<"void foo(Base* b)\n";
}

int main()
{
    //foo(NULL);
    foo(nullptr);
}