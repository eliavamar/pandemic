#include "Virologist.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 
    
    Virologist::Virologist(Board& b, City c):Player(b,c){this->job="Virologist";}
    
    Virologist& Virologist::treat(City c){
    if(this->board[c]==0){throw out_of_range{"there is no infection in the city"};}
    if(this->city==c){
        if(this->board.get_cure(this->board.get_color(c))){board[c]=0;}
        else{board[c]-=1;}
    }
    else if(this->card[c]){
        if(this->board.get_cure(this->board.get_color(c))){board[c]=0;}
        else{board[c]-=1;}
        this->card[c]=false;
    }
    else{throw out_of_range{"there is no infection in the city"};}
    
    return *this;
    }
    
};