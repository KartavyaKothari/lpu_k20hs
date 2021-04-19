#include<bits/stdc++.h>
using namespace std;

class Theatre{
    public:
    string name;
    int *seats;
    bool is_morning_show;
    Theatre(){

    }
};

class Movie{
    public:
    string movie_name;
    string language;
    Theatre shows[2];
    int rating;

    Movie(){}

    Movie(string movie_name, string l, int r):
        movie_name(movie_name),
        rating(r),
        language(l)
    {}
};

class Person{};

class BookMyShow{
    Movie *movies[3];
    public:
    BookMyShow(){
        //Add all backend data
        movies[0] = new Movie("The founder","English",7);
        movies[1] = new Movie("Avengers endgame","Tamil",9);
        movies[2] = new Movie("Avatar","Hindi",10);
    }

    void start_app(){
        cout<<"Welcome to the movie booking portal"<<endl;
        show_main_menu_options();
        cout<<endl;

        cout<<"Response: ";
        int res;
        cin>>res;

        switch(res){
            case 1:
                // Show trending movies
                cout<<"Select movie to book"<<endl;
                cout<<"====================="<<endl;
                show_latest_movies();
                cout<<"Response: ";
                int mov_res;
                cin>>mov_res;
                break;
            case 2: 
                // Check current bookings
                break;
            case 3:
                // Exit
                break;
        }
    }

    void show_latest_movies(){
        for(int i = 0 ; i < 3 ; i++){
            cout<<(i+1)<<". ";
            cout<<movies[i]->movie_name<<", ";
            cout<<movies[i]->language<<", ";
            cout<<"IMDB: "<<movies[i]->rating<<endl;
        }
    }

    void show_main_menu_options(){
        cout<<"1. Latest/Trending movies"<<endl;
        cout<<"2. Check current bookings"<<endl;
        cout<<"3. Exit"<<endl;
    }
};

int main(){
    BookMyShow bms;
    bms.start_app();

    return 0;
}