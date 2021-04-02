#include<bits/stdc++.h>
using namespace std;

class Time{
    int hour;
    int mins;

    public:

    void operator =(int t){
        hour = t/60;
        mins = t%60;
    }

    void display(){
        cout<<hour<<":"<<mins<<endl;
    }
};

int main(){
    int time_in_mins = 279;
    Time t;
    t = time_in_mins;
    t.display();

    return 0;
}