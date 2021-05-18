#include "GeneSplicer.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 
    GeneSplicer::GeneSplicer(Board& b, City c):Player(b,c){this->job="GeneSplicer";}
    void GeneSplicer::discover_cure(Color color){
         int const cards= 5;
        if(!this->board.get_cure(color)){
            if(this->board.get_stations(this->city)){
                int c=0;
                vector<City>remove_cities;
                for (auto & p : this->card){
                    if(p.second){
                    c++;
                    remove_cities.push_back(p.first);
                    }
                    if(c==cards){break;}
                }
                if(c<cards){throw out_of_range{"there is no station"};}
                for(unsigned long i=0;i<c;i++){
                    this->card[remove_cities[i]]=false;
                }
                this->board.set_cure(color);

            }
            else{
                throw out_of_range{"there is no station"};
            }
        }
    }
};