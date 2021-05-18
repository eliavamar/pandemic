#include "Medic.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic {
    Medic::Medic(Board& b, City c):Player(b,c){
        this->job="Medic";
    }

    Medic& Medic::drive(City c){
        this->Player::drive(c);
        if(this->board.get_cure(this->board.get_color(c))){this->board[c]=0;}
        return *this;
    }
    Medic& Medic::fly_direct(City c){
        this->Player::fly_direct(c);
        if(this->board.get_cure(this->board.get_color(c))){this->board[c]=0;}
        return *this;
    }
    Medic& Medic::fly_shuttle(City c){
        this->Player::fly_shuttle(c);
        if(this->board.get_cure(this->board.get_color(c))){this->board[c]=0;}
        return *this;
    }

    Medic& Medic::fly_charter(City c){
        this->Player::fly_charter(c);
        if(this->board.get_cure(this->board.get_color(c))){this->board[c]=0;}
        return *this;
    }

    Medic& Medic::treat(City c){
        if(this->board[c]==0||this->city!=c){throw out_of_range{"there is no infection in the city"};}
        this->board[c]=0;
        return *this;
    }
};