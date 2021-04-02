#include<bits/stdc++.h>
using namespace std;

class Time{
    int hour;
    int mins;

    public:

    Time(int t){
        hour = t/60;
        mins = t%60;
    }

    operator int(){
        return hour*60+mins;
    }

    void display(){
        cout<<hour<<":"<<mins<<endl;
    }
};

int main(){
    int time_in_mins = 279;
    Time t(time_in_mins);

    // cout<<t.operator int();
    cout<<(int) t;

    return 0;
}