#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{
    
    Player::Player(Board& b, City c):board(b){
        this->board=b;
        this->city=c;
        this->job="Player";
    }

    Player& Player::fly_charter(City c){
        if(this->card.find(this->city)==this->card.end()||!this->card[this->city]){throw out_of_range{"card not found"};}
        this->card[this->city]=false;
        this->city=c;
        return *this;
    }

    Player& Player::drive(City c){
        if(!this->board.get_neighbor(this->city,c)){throw out_of_range{"the cities are not connected"};}
        this->city=c;
        return *this;
    }
    Player& Player::fly_direct(City c){
        if(this->card.find(c)==this->card.end()||!this->card[c]||this->city==c){throw out_of_range{"you dont have city card"};}
        this->card[c]=false;
        this->city=c;
        return *this;
    }
    Player& Player::fly_shuttle(City c){
        if(!this->board.get_stations(c)||!this->board.get_stations(this->city)||this->city==c){throw out_of_range{"there is no station in the city"};}
        this->city=c;
        return *this;
    }

    Player& Player::treat(City c){
        if(this->board[c]==0||this->city!=c){throw out_of_range{"there is no infection in the city"};}
        if(this->board.get_cure(this->board.get_color(c))){this->board[c]=0;}
        else{board[c]-=1;}
        return *this;
    }

    Player& Player::take_card(City c){
        if (this->card.find(c)==this->card.end()||!this->card[c]){this->card[c]=true;}
        return *this;
    }

    std::string Player::role() const{return this->job;}
    
    void Player::discover_cure(Color color){
         int const cards= 5;
        if(!this->board.get_cure(color)){
            if(this->board.get_stations(this->city)){
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
            else{throw out_of_range{"there is no station"};}
        }


    } 
    
    void Player::build(){
        if(!this->card[this->city]){throw out_of_range{"you dont have city card"};}
        if(!this->board.get_stations(this->city)){this->board.set_stations(this->city);this->card[this->city]=false;}
    }
    
    void Player::remove_cards(){
        for (auto & p : this->card){p.second=false;}
    } 
};