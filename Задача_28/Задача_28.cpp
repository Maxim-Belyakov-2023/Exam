
#include <iostream>

class E
{
    
};

void f(int i)
{
    E e;
    switch(i)
    {
    case 0:
        throw e;
    case 1:
        throw &e;
    }
    std::cout << 0;
}

int main(int argc, char* argv[])
{
    try
    {
        f(2);
    }
    catch (E*)
    {
        std::cout << 1;
    }
    catch(E)
    {
        std::cout << 2;
    }
    return 0;
}
