#include <iostream>
using namespace std;

class A {
public:
	float v;
	void set(float v) {
		this->v = v;
	}
	float get(void) { 
		return v;
	}
};
int main() {
	A a;
	a.set(0.5);
	cout << a.get();
	return 0;
}