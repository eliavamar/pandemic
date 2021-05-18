#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class Scientist:public Player{
        public:
            int n;
            void discover_cure(Color color);
            Scientist(Board& b, City c,int n);
        
    };

};