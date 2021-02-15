#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for(int i = 1 ; i < 10000000 ; i*=10){
	    cout<<setfill('-')<<setw(10)<<i<<"   "<<setw(10)<<i*2<<"   "<<setw(10)<<i*3<<endl;
	}

    cout<<endl;

    double PI = 30000.145235242;

    cout<<PI<<endl;
    cout<<setprecision(2)<<PI<<endl;
    cout<<setprecision(10)<<PI<<endl;

    cout<<setbase(16)<<110<<endl;
    cout<<setbase(8)<<110<<endl;

	return 0;
}