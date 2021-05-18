#include "Scientist.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic { 

Scientist::Scientist(Board& b, City c,int n):Player(b,c){this->n=n;this->job="Scientist";}
    
    void Scientist::discover_cure(Color color){
        if(!this->board.get_cure(color)){
            if(this->board.get_stations(this->city)){
                int c=0;
                vector<City>remove_cities;
                for (auto const& p : this->card){
                    if(p.second&&this->board.get_color(p.first)==color){
                        c++;
                        remove_cities.push_back(p.first);
                    }
                    if(c==this->n){break;}
                }
                if(c<this->n){throw out_of_range{"you dont have enough card"};}
                for(unsigned long i=0;i<c;i++){
                    this->card[remove_cities[i]]=false;
                }
                this->board.set_cure(color);
            }
            else{throw out_of_range{"there is no station"};}
        }

    }

};