#include "Dispatcher.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 
    Dispatcher::Dispatcher(Board& b, City c):Player(b,c){
        this->job="Dispatcher";
    }       
    Dispatcher& Dispatcher::fly_direct(City c){
        if(this->board.get_stations(this->city)&&(this->city!=c)){this->city=c;return *this;}
        this->Player::fly_direct(c);
        return *this;
    }
};