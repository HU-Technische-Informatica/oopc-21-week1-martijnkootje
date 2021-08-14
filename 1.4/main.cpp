#include "furniture.hpp"

using namespace std;

int main(){
	stoel st1(4, 1);
	stoel st2(4, 1);
	stoel st3(4, 1);
	stoel st4(4, 1);

	tafel t(4, 120, 80);
	vector<stoel> v = {st1, st2, st3, st4};
	furnatures f(v, t);
	f.print();

	f.makeMoreHipster();
	f.print();
}
