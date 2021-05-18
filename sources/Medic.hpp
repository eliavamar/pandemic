#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class Medic:public Player{
        public:
            Medic(Board& b, City c);
            Medic& treat(City c);
            Medic& drive(City c);
            Medic& fly_direct(City c);
            Medic& fly_shuttle(City c);
            Medic& fly_charter(City c);


    };

};