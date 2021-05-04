#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> solar_sys = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Nepture","Uranus"};
    
    vector<string>::iterator falcon = solar_sys.begin();
    vector<string>::iterator milano = solar_sys.begin();

    advance(falcon,3);
    // falcon = next(falcon,3);
    cout<<"Falcon is at "<<*falcon<<endl;
    advance(falcon,-2);
    cout<<"Falcon is at "<<*falcon<<endl;

    cout<<endl;

    cout<<"Falcon is "<<distance(milano,falcon)<<" planets away"<<endl;
    cout<<"Milano is "<<distance(falcon,milano)<<" planets away"<<endl;

    cout<<endl;

    cout<<"Milano is moving to "<<*next(milano,distance(milano,falcon))<<endl;
    cout<<"But currently it is at "<<*milano<<endl;

    return 0;
}