#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
};

int main(){
    fstream m_fle;
    m_fle.open("details.mangesh",ios::out|ios::binary);
    if(!m_fle)return 1;

    struct Student deets[3] = {
        {"Kartavya",24},
        {"Mangesh",54},
        {"Deep",12}
    };

    for(int i = 0 ; i < 3 ; i++){
        m_fle.write((char *) &deets[i],sizeof(Student));
        // m_fle<<deets[i].name<<" "<<deets[i].age<<endl;
    }

    if(!m_fle.good()) return 1;
    m_fle.close();

    m_fle.open("details.mangesh",ios::in|ios::binary);
    if(!m_fle)return 1;

    struct Student read_deets[3];

    for(int i = 0 ; i < 3 ; i++){
        m_fle.read((char *) &read_deets[i],sizeof(Student));
        // struct Student s;
        // m_fle>>s.name>>s.age;
        // read_deets[i] = s;
    }

    for(int i = 0 ; i < 3 ; i++){
        cout<<read_deets[i].name<<" "<<read_deets[i].age<<endl;
    }

    return 0;
}