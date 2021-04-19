#include<bits/stdc++.h>
using namespace std;

class Movie{
    public:
    string movie_name;
    string language;
    int rating;

    Movie(string movie_name, string l, int r):
        movie_name(movie_name),
        rating(r),
        language(l)
    {}

    void display(){
        cout<<movie_name<<", ";
        cout<<language<<", ";
        cout<<"IMDB: "<<rating<<endl;
    }
};

class Booking{
    public:
    string theatre;
    Movie *m;
    bool is_morning_show;

    Booking(string t, Movie *m, bool is_mor):
        theatre(t),
        m(m),
        is_morning_show(is_mor)
    {}
};

class BookMyShow{
    Movie *movies[3];
    string theatres[3];
    Booking *bookings[30];
    int last_booking_idx = -1;
    public:
    BookMyShow(){
        //Add all backend data
        movies[0] = new Movie("The founder","English",7);
        movies[1] = new Movie("Avengers endgame","Tamil",9);
        movies[2] = new Movie("Avatar","Hindi",10);

        theatres[0] = "PVR Darbhanga";
        theatres[1] = "Cinepolis Patna";
        theatres[2] = "IMAX darbhanga";
    }

    int get_res(){
        cout<<"Response: ";
        int res;
        cin>>res;
        return res;
    }

    bool get_slot(){
        cout<<"Select timings:"<<endl;
        cout<<"1. Morning"<<endl;
        cout<<"2. Evening"<<endl;
        
        if(get_res()==1){
            return true;
        }else return false;

    }

    void start_app(){
        cout<<"Welcome to the movie booking portal"<<endl;

        int mov_res;
        int thea_res;
        
        bool is_continue = true;

        while(is_continue){
            show_main_menu_options();
            switch(get_res()){
                case 1:
                    show_latest_movies();
                    mov_res = get_res();

                    show_theatres();
                    thea_res = get_res();

                    add_bookings(thea_res-1,mov_res-1,get_slot());
                    break;
                case 2: 
                    show_bookings();
                    break;
                case 3:
                    // Exit
                    is_continue = false;
                    break;
            }
        }

        cout<<"Thanks for visiting"<<endl;
    }

    void add_bookings(int thea, int mov, bool is_mor){
        last_booking_idx++;
        bookings[last_booking_idx] = new Booking(
            theatres[thea],
            movies[mov],
            is_mor
        );
    }
    void show_bookings(){
        for(int i = 0 ; i <= last_booking_idx ; i++){
            Booking *b = bookings[i];
            cout<<"Theatre: "<<b->theatre<<endl;
            b->m->display();
            cout<<"Timing: "<<(b->is_morning_show?"Morning":"Evening")<<endl;
        }
    }

    void show_latest_movies(){
        cout<<"Select movie to book"<<endl;
        cout<<"====================="<<endl;
        for(int i = 0 ; i < 3 ; i++){
            cout<<(i+1)<<". ";
            movies[i]->display();
        }
    }

    void show_theatres(){
        cout<<"Select Theatre"<<endl;
        cout<<"=============="<<endl;
        for(int i = 0 ; i < 3 ; i++){
            cout<<(i+1)<<". ";
            cout<<theatres[i]<<endl;
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