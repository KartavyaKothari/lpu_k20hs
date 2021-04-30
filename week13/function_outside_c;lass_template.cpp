#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
class Calculator{
    public:
    TYPE x,y;
    Calculator(TYPE x, TYPE y){
        this->x = x;
        this->y = y;
    }

    TYPE add(){
        return x+y;
    }

    TYPE sub(){
        return x-y;
    }

    TYPE mul();
};

template <class X>
X Calculator<X>::mul(){
    return x*y;
}

// int Calculator::mul(){
//     reutrn x*y;
// }

int main(){
    Calculator<int> c(10,20);

    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;
    cout<<c.mul()<<endl;
    return 0;
}