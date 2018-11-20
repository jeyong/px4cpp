// g++ main.cpp -std=c++11

#include <iostream>
using namespace std;

class Base
{
    public:
        int x;
        int y;
        int z;
        Base();
};

Base::Base()
        : x(1),
        y(2),
        z(3)
{

}

int main()
{
    Base b;
    cout<<"Base.x = "<<b.x<<" Base.y = "<<b.y<<" Base.z = "<<b.z;
    return 0;
}
