using namespace std;
#include<iostream>

class player{
    public: 
        int health;
        int atk_power;
    
    public:
    player();
    //~player();   
};

player::player(){
    health = 10;
    atk_power = 100;

}

void gamestory(){
    cout << "Good Morning Player , Welcome to the new land" << "\n";
    cout << "This is the beginning of a new adventure" << "\n";
    cout << "this is a land filled with wondrous creatures who can be your partners when tamed" << "\n";
    cout << "Survive and Make ur way towards the tower" << "\n";
}

void story(){
    gamestory();
    player P1;
    cout << P1.health << "\n";
    cout << P1.atk_power;
}

