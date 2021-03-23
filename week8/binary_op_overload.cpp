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

    ComplexNumber operator +(ComplexNumber num){
        double real = r+num.r;
        double comp = c+num.c;

        return ComplexNumber(real,comp);
    }

    ComplexNumber operator -(ComplexNumber num){
        double real = r-num.r;
        double comp = c-num.c;

        return ComplexNumber(real,comp);
    }

    ComplexNumber operator /(ComplexNumber num){
        double real = (r*num.r+c*num.c)/(num.r*num.r+num.c*num.c);
        double comp = (c*num.r-r*num.c)/(num.r*num.r+num.c*num.c);

        return ComplexNumber(real,comp);
    }
};

int main(){
    ComplexNumber num1(3,6);
    ComplexNumber num2(10,2);

    num1.display();
    num2.display();

    ComplexNumber num3 = num1 + num2;
    ComplexNumber num4 = num1 - num2;
    ComplexNumber num5 = num1 / num2;
    
    num3.display();
    num4.display();
    num5.display();

    //a = 3+6i
    //b = 10+2i

    //a+b = 13+8i
    //a-b = -7+4i
    //a/b = 0.403846+0.519231i
    return 0;
}