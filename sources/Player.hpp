#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <unordered_map>
#include <iostream>
namespace pandemic {
    class Player {
        protected:
            std::unordered_map<City,bool>card;
            City city;
            Board& board;
            std::string job;
        public:
            Player(Board& b, City c);
            virtual Player& drive(City c);
            virtual Player& fly_charter(City c);
            virtual Player& fly_direct(City c);
            virtual Player& fly_shuttle(City c);
            virtual Player& treat(City c);
            virtual Player& take_card(City c); 
            std::string role ()const; 
            virtual void discover_cure(Color color);
            virtual void remove_cards();
            virtual void build();
    };
};