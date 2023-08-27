#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
using namespace std;
void print(int i) {
	cout << i << ",";
}
int main() {
	int num[] = { 3,9,3 };
	vector<int>v1(num, num + 3);
	set<int>s1(num, num + 3);
	deque<int>d1(num, num + 3);
	d1.pop_front();
	for_each(v1.begin(), v1.end(), print);
	for_each(s1.begin(), s1.end(), print);
	for_each(d1.begin(), d1.end(), print);
	return 0;
}