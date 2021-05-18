#include "FieldDoctor.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 
    FieldDoctor::FieldDoctor(Board& b, City c):Player(b,c){this->job="FieldDoctor";}
    FieldDoctor& FieldDoctor::treat(City c){
        if(this->board[c]==0||(this->city!=c&&!this->board.get_neighbor(this->city,c))){throw out_of_range{"there is no infection in the city"};}
        if(this->board.get_cure(this->board.get_color(c))){board[c]=0;}
        else{board[c]-=1;}
        return *this;
    }
};