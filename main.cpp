#include <iostream>

class Vector {
public:
    Vector(size_t cap = 4)
        :cap(cap)
    {
        p = new int[cap];
    }

private:
    int *p = 0;
    int cap = 0;
    int sz = 0;
};

int main()
{
}
