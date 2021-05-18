#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class Dispatcher:public Player{
        public:
            Dispatcher(Board& b, City c);
            Dispatcher& fly_direct(City c);

        
    };

};