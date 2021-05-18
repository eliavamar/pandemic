#include "OperationsExpert.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 
    OperationsExpert::OperationsExpert(Board& b, City c):Player(b,c){this->job="OperationsExpert";}
    void OperationsExpert::build(){this->board.set_stations(this->city);}
};