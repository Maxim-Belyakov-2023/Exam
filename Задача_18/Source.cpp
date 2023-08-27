#include <iostream>
using namespace std;

class A
{
public:
    A(A* v)
    {
        A::v = v;
    }

    A()
    {
        A::v = 1.0;
    }
    
    float v;

    float set(float v)
    {
        A::v = v;
        return v;
    }

    float get(float v)
    {
        return A::v;
    }
};

int main()
{
    A a, *b = new A(a);
    // Обращение к объекту, который не являтся указателем, проиводится через "."
    // А "->" используется для ображение к указателям.
    cout << a->get(b->set(a->v));
    return 0;
}
