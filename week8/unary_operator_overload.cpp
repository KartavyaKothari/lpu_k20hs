#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    double r;
    double c;

    public:
    ComplexNumber():r(0),c(0){}
    ComplexNumber(double r, double c):r(r),c(c){}

    void display(){
        cout<<r<<"+"<<c<<"i"<<endl;
    }

    void operator ++(){
        cout<<"Complex number is incremented"<<endl;
        r++;
        c++;
    }

    void operator !(){
        cout<<"Complex number is negeted"<<endl;
        r = -r;
        c = -c;
    }
};

int main(){
    ComplexNumber num1(3,6);
    ComplexNumber num2(10,2);

    num1.display();
    ++num1;
    num1.display();
    !num1;
    num1.display();
    // num2.display();


    return 0;
}