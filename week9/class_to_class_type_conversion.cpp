#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int meters;
    int cm;

    Metric(double height){
        kms = (int)height/1000;
        meters = (int)height %1000;
        cm = (height - (int)height)*100;
    }

    void display(){
        cout<<kms<<"Kms, "<<meters<<" m, and "<<cm<<" centimeters"<<endl;
    }
};

class Imperial{
    int miles;
    int feet;
    int inches;
    public:

    // Imperial(Metric m){
    //     int centimeters = (m.kms*1000+m.meters)*100+m.cm;
    //     miles = centimeters/160934;
    //     centimeters%=160934;
    //     feet = centimeters/30;
    //     centimeters%=30;
    //     inches = centimeters/2.5;
    // }

    void operator =(Metric m){
        int centimeters = (m.kms*1000+m.meters)*100+m.cm;
        miles = centimeters/160934;
        centimeters%=160934;
        feet = centimeters/30;
        centimeters%=30;
        inches = centimeters/2.5;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches"<<endl;
    }
};

int main(){
    double height =  8848.86;
    // height - > metric - > imperial;
    Metric m = height;
    m.display();
    // 8Kms, 848 m, and 86 centimeters 

    Imperial i;
    i = m;
    i.display();

    return 0;
}