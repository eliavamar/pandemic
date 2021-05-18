#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class GeneSplicer:public Player{
        public:
            GeneSplicer(Board& b, City c);
            void discover_cure(Color color);

        
    };

}