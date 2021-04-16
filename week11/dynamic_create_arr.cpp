#include <iostream>
using namespace std;

int main() {
	int *val = new int[60];
	// val[2] = 12;
    *(val+2) = 12;
    
	// cout<<val[2];
    cout<<*(val+2);
	return 0;
}