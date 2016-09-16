#include <iostream>

class Vector {
public:
    Vector(size_t cap = 4)
        :cap(cap)
    {
        p = new int[cap];
    }

    ~Vector()
    {
        delete[] p;
    }

    int capacity() const
    {
        return cap;
    }

    int size() const
    {
        return sz;
    }

    int at(int i) const
    {
        return p[i];
    }

    int push_back(int v)
    {
        if (cap == sz) {
            cap = cap != 0 ? cap*1.5 : 4;
            int *tmp = new int [cap];

            for (size_t i=0; i<sz; ++i)
                tmp[i] = p[i];

            delete[] p;
            p = tmp;
        }

        p[sz] = v;
        ++sz;
    }

private:
    int *p = 0;
    size_t cap = 0;
    size_t sz = 0;
};

int main()
{
    Vector v;

    size_t n;
    std::cin >> n;

    for (size_t i=0; i<n; ++i)
        v.push_back(i*2);

    std::cout << "capacity: " << v.capacity() << std::endl;

    for (int i=v.size()-1; i>=0; --i)
        std::cout << v.at(i) << ' ';
}
