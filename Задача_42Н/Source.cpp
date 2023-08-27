#include <iostream>
using namespace std;
int main(void) {
	string s = "x";
	s.append(s).append(s).append(s).append(s);
	cout << s.size() << endl;
	return 0;
}