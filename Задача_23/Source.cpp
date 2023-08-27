#include <iostream>
using namespace std;
class A {
public:
	string a(string b) {
		return b.substr(0, 2);
	}
};
int main() {
	A a;
	cout << a.a("ABCD");
	return 0;
}