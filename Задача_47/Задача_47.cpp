#include <algorithm>
#include <iostream>
#include <vector>

void print(int i)
{
    std::cout << i << ",";
}

int main(int argc, char* argv[])
{
    int n[] = {3, 9, 0, 2, 1};
    std::vector<int> v1(5);
    std::copy(n, n + 5, v1.begin());
    std::for_each(v1.begin(), v1.end(), print);
    return 0;
}
