#include <iostream>
#include <string>

using namespace std;
//Parameter passing

void demoFunction(int age) {
	cout << "The age is " << age << " Years. \n";
	
}

int main() {
	demoFunction(30);
	demoFunction(3);
	demoFunction(90);
}
