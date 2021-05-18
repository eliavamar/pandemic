#include "Researcher.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic {
    Researcher::Researcher(Board& b, City c):Player(b,c){this->job="Researcher";} 

    void Researcher::discover_cure(Color color){
            int const cards= 5;
            int c=0;
            vector<City>remove_cities;
            for (auto const& p : this->card){
                if(p.second&&this->board.get_color(p.first)==color){
                    c++;
                    remove_cities.push_back(p.first);
                }
                if(c==cards){break;}
            }
            if(c<cards){throw out_of_range{"you dont have enough card"};}
            for(unsigned long i=0;i<c;i++){
                this->card[remove_cities[i]]=false;
            }
            this->board.set_cure(color); 
    }

};