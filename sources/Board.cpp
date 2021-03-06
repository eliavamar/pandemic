#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
namespace pandemic{
    Board::Board(){
        this->build_board();
    }
    void Board::build_board(){   
        this->dise_lvl[City::Algiers]=0;
        this->city_color[City::Algiers]=Color::Black;
        this->stations[City::Algiers]=false;
        this->connections_map[City::Algiers][City::Madrid]=true;
        this->connections_map[City::Algiers][City::Paris]=true;
        this->connections_map[City::Algiers][City::Istanbul]=true;
        this->connections_map[City::Algiers][City::Cairo]=true;
        this->dise_lvl[City::Atlanta]=0;
        this->city_color[City::Atlanta]=Color::Blue;
        this->stations[City::Atlanta]=false;
        this->connections_map[City::Atlanta][City::Chicago]=true;
        this->connections_map[City::Atlanta][City::Miami]=true;
        this->connections_map[City::Atlanta][City::Washington]=true;
        this->dise_lvl[City::Baghdad]=0;
        this->city_color[City::Baghdad]=Color::Black;
        this->stations[City::Baghdad]=false;
        this->connections_map[City::Baghdad][City::Tehran]=true;
        this->connections_map[City::Baghdad][City::Istanbul]=true;
        this->connections_map[City::Baghdad][City::Cairo]=true;
        this->connections_map[City::Baghdad][City::Riyadh]=true;
        this->connections_map[City::Baghdad][City::Karachi]=true;
        this->dise_lvl[City::Bangkok]=0;
        this->city_color[City::Bangkok]=Color::Red;
        this->stations[City::Bangkok]=false;
        this->connections_map[City::Bangkok][City::Kolkata]=true;
        this->connections_map[City::Bangkok][City::Chennai]=true;
        this->connections_map[City::Bangkok][City::Jakarta]=true;
        this->connections_map[City::Bangkok][City::HoChiMinhCity]=true;
        this->connections_map[City::Bangkok][City::HongKong]=true;
        this->dise_lvl[City::Beijing]=0;
        this->city_color[City::Beijing]=Color::Red;
        this->stations[City::Beijing]=false;
        this->connections_map[City::Beijing][City::Shanghai]=true;
        this->connections_map[City::Beijing][City::Seoul]=true;
        this->dise_lvl[City::Bogota]=0;
        this->city_color[City::Bogota]=Color::Yellow;
        this->stations[City::Bogota]=false;
        this->connections_map[City::Bogota][City::MexicoCity]=true;
        this->connections_map[City::Bogota][City::Lima]=true;
        this->connections_map[City::Bogota][City::Miami]=true;
        this->connections_map[City::Bogota][City::SaoPaulo]=true;
        this->connections_map[City::Bogota][City::BuenosAires]=true;
        this->dise_lvl[City::BuenosAires]=0;
        this->city_color[City::BuenosAires]=Color::Yellow;
        this->stations[City::BuenosAires]=false;
        this->connections_map[City::BuenosAires][City::Bogota]=true;
        this->connections_map[City::BuenosAires][City::SaoPaulo]=true;
        this->dise_lvl[City::Cairo]=0;
        this->city_color[City::Cairo]=Color::Black;
        this->stations[City::Cairo]=false;
        this->connections_map[City::Cairo][City::Algiers]=true;
        this->connections_map[City::Cairo][City::Istanbul]=true;
        this->connections_map[City::Cairo][City::Baghdad]=true;
        this->connections_map[City::Cairo][City::Khartoum]=true;
        this->connections_map[City::Cairo][City::Riyadh]=true;
        this->connections_map[City::Cairo][City::Istanbul]=true;
        this->dise_lvl[City::Chennai]=0;
        this->city_color[City::Chennai]=Color::Black;
        this->stations[City::Chennai]=false;
        this->connections_map[City::Chennai][City::Mumbai]=true;
        this->connections_map[City::Chennai][City::Delhi]=true;
        this->connections_map[City::Chennai][City::Kolkata]=true;
        this->connections_map[City::Chennai][City::Bangkok]=true;
        this->connections_map[City::Chennai][City::Jakarta]=true;
        this->dise_lvl[City::Chicago]=0;
        this->city_color[City::Chicago]=Color::Blue;
        this->stations[City::Chicago]=false;
        this->connections_map[City::Chicago][City::SanFrancisco]=true;
        this->connections_map[City::Chicago][City::LosAngeles]=true;
        this->connections_map[City::Chicago][City::MexicoCity]=true;
        this->connections_map[City::Chicago][City::Atlanta]=true;
        this->connections_map[City::Chicago][City::Montreal]=true;
        this->dise_lvl[City::Delhi]=0;
        this->city_color[City::Delhi]=Color::Black;
        this->stations[City::Delhi]=false;
        this->connections_map[City::Delhi][City::Tehran]=true;
        this->connections_map[City::Delhi][City::Karachi]=true;
        this->connections_map[City::Delhi][City::Mumbai]=true;
        this->connections_map[City::Delhi][City::Chennai]=true;
        this->connections_map[City::Delhi][City::Kolkata]=true;
        this->dise_lvl[City::Essen]=0;
        this->city_color[City::Essen]=Color::Blue;
        this->stations[City::Essen]=false;
        this->connections_map[City::Essen][City::London]=true;
        this->connections_map[City::Essen][City::Paris]=true;
        this->connections_map[City::Essen][City::Milan]=true;
        this->connections_map[City::Essen][City::StPetersburg]=true;
        this->dise_lvl[City::HoChiMinhCity]=0;
        this->city_color[City::HoChiMinhCity]=Color::Red;
        this->stations[City::HoChiMinhCity]=false;
        this->connections_map[City::HoChiMinhCity][City::Jakarta]=true;
        this->connections_map[City::HoChiMinhCity][City::Bangkok]=true;
        this->connections_map[City::HoChiMinhCity][City::HongKong]=true;
        this->connections_map[City::HoChiMinhCity][City::Manila]=true;
        this->dise_lvl[City::HongKong]=0;
        this->city_color[City::HongKong]=Color::Red;
        this->stations[City::HongKong]=false;
        this->connections_map[City::HongKong][City::Bangkok]=true;
        this->connections_map[City::HongKong][City::Kolkata]=true;
        this->connections_map[City::HongKong][City::HoChiMinhCity]=true;
        this->connections_map[City::HongKong][City::Shanghai]=true;
        this->connections_map[City::HongKong][City::Manila]=true;
        this->connections_map[City::HongKong][City::Taipei]=true;
        this->dise_lvl[City::Istanbul]=0;
        this->city_color[City::Istanbul]=Color::Black;
        this->stations[City::Istanbul]=false;
        this->connections_map[City::Istanbul][City::Milan]=true;
        this->connections_map[City::Istanbul][City::Algiers]=true;
        this->connections_map[City::Istanbul][City::StPetersburg]=true;
        this->connections_map[City::Istanbul][City::Cairo]=true;
        this->connections_map[City::Istanbul][City::Baghdad]=true;
        this->connections_map[City::Istanbul][City::Moscow]=true;
        this->dise_lvl[City::Jakarta]=0;
        this->city_color[City::Jakarta]=Color::Red;
        this->stations[City::Jakarta]=false;
        this->connections_map[City::Jakarta][City::Chennai]=true;
        this->connections_map[City::Jakarta][City::Bangkok]=true;
        this->connections_map[City::Jakarta][City::HoChiMinhCity]=true;
        this->connections_map[City::Jakarta][City::Sydney]=true;
        this->dise_lvl[City::Johannesburg]=0;
        this->city_color[City::Johannesburg]=Color::Yellow;
        this->stations[City::Johannesburg]=false;
        this->connections_map[City::Johannesburg][City::Kinshasa]=true;
        this->connections_map[City::Johannesburg][City::Khartoum]=true;
        this->dise_lvl[City::Karachi]=0;
        this->city_color[City::Karachi]=Color::Black;
        this->stations[City::Karachi]=false;
        this->connections_map[City::Karachi][City::Tehran]=true;
        this->connections_map[City::Karachi][City::Baghdad]=true;
        this->connections_map[City::Karachi][City::Riyadh]=true;
        this->connections_map[City::Karachi][City::Mumbai]=true;
        this->connections_map[City::Karachi][City::Delhi]=true;
        this->dise_lvl[City::Khartoum]=0;
        this->city_color[City::Khartoum]=Color::Yellow;
        this->stations[City::Khartoum]=false;
        this->connections_map[City::Khartoum][City::Cairo]=true;
        this->connections_map[City::Khartoum][City::Lagos]=true;
        this->connections_map[City::Khartoum][City::Kinshasa]=true;
        this->connections_map[City::Khartoum][City::Johannesburg]=true;
        this->dise_lvl[City::Kinshasa]=0;
        this->city_color[City::Kinshasa]=Color::Yellow;
        this->stations[City::Kinshasa]=false;
        this->connections_map[City::Kinshasa][City::Lagos]=true;
        this->connections_map[City::Kinshasa][City::Khartoum]=true;
        this->connections_map[City::Kinshasa][City::Johannesburg]=true;
        this->dise_lvl[City::Kolkata]=0;
        this->city_color[City::Kolkata]=Color::Black;
        this->stations[City::Kolkata]=false;
        this->connections_map[City::Kolkata][City::Delhi]=true;
        this->connections_map[City::Kolkata][City::Chennai]=true;
        this->connections_map[City::Kolkata][City::Bangkok]=true;
        this->connections_map[City::Kolkata][City::HongKong]=true;
        this->dise_lvl[City::Lagos]=0;
        this->city_color[City::Lagos]=Color::Yellow;
        this->stations[City::Lagos]=false;
        this->connections_map[City::Lagos][City::SaoPaulo]=true;
        this->connections_map[City::Lagos][City::Khartoum]=true;
        this->connections_map[City::Lagos][City::Kinshasa]=true;
        this->dise_lvl[City::Lima]=0;
        this->city_color[City::Lima]=Color::Yellow;
        this->stations[City::Lima]=false;
        this->connections_map[City::Lima][City::MexicoCity]=true;
        this->connections_map[City::Lima][City::Bogota]=true;
        this->connections_map[City::Lima][City::Santiago]=true;
        this->dise_lvl[City::London]=0;
        this->city_color[City::London]=Color::Blue;
        this->stations[City::London]=false;
        this->connections_map[City::London][City::NewYork]=true;
        this->connections_map[City::London][City::Madrid]=true;
        this->connections_map[City::London][City::Essen]=true;
        this->connections_map[City::London][City::Paris]=true;
        this->dise_lvl[City::LosAngeles]=0;
        this->city_color[City::LosAngeles]=Color::Yellow;
        this->stations[City::LosAngeles]=false;
        this->connections_map[City::LosAngeles][City::SanFrancisco]=true;
        this->connections_map[City::LosAngeles][City::Chicago]=true;
        this->connections_map[City::LosAngeles][City::MexicoCity]=true;
        this->connections_map[City::LosAngeles][City::Sydney]=true;
        this->dise_lvl[City::Madrid]=0;
        this->city_color[City::Madrid]=Color::Blue;
        this->stations[City::Madrid]=false;
        this->connections_map[City::Madrid][City::London]=true;
        this->connections_map[City::Madrid][City::NewYork]=true;
        this->connections_map[City::Madrid][City::Paris]=true;
        this->connections_map[City::Madrid][City::SaoPaulo]=true;
        this->connections_map[City::Madrid][City::Algiers]=true;
        this->dise_lvl[City::Manila]=0;
        this->city_color[City::Manila]=Color::Red;
        this->stations[City::Manila]=false;
        this->connections_map[City::Manila][City::Taipei]=true;
        this->connections_map[City::Manila][City::SanFrancisco]=true;
        this->connections_map[City::Manila][City::HoChiMinhCity]=true;
        this->connections_map[City::Manila][City::Sydney]=true;
        this->connections_map[City::Manila][City::HongKong]=true;
        this->dise_lvl[City::MexicoCity]=0;
        this->city_color[City::MexicoCity]=Color::Yellow;
        this->stations[City::MexicoCity]=false;
        this->connections_map[City::MexicoCity][City::LosAngeles]=true;
        this->connections_map[City::MexicoCity][City::Chicago]=true;
        this->connections_map[City::MexicoCity][City::Miami]=true;
        this->connections_map[City::MexicoCity][City::Lima]=true;
        this->connections_map[City::MexicoCity][City::Bogota]=true;
        this->dise_lvl[City::Miami]=0;
        this->city_color[City::Miami]=Color::Yellow;
        this->stations[City::Miami]=false;
        this->connections_map[City::Miami][City::Atlanta]=true;
        this->connections_map[City::Miami][City::MexicoCity]=true;
        this->connections_map[City::Miami][City::Washington]=true;
        this->connections_map[City::Miami][City::Bogota]=true;
        this->dise_lvl[City::Milan]=0;
        this->city_color[City::Milan]=Color::Blue;
        this->stations[City::Milan]=false;
        this->connections_map[City::Milan][City::Essen]=true;
        this->connections_map[City::Milan][City::Paris]=true;
        this->connections_map[City::Milan][City::Istanbul]=true;
        this->dise_lvl[City::Montreal]=0;
        this->city_color[City::Montreal]=Color::Blue;
        this->stations[City::Montreal]=false;
        this->connections_map[City::Montreal][City::Chicago]=true;
        this->connections_map[City::Montreal][City::Washington]=true;
        this->connections_map[City::Montreal][City::NewYork]=true;
        this->dise_lvl[City::Moscow]=0;
        this->city_color[City::Moscow]=Color::Black;
        this->stations[City::Moscow]=false;
        this->connections_map[City::Moscow][City::StPetersburg]=true;
        this->connections_map[City::Moscow][City::Istanbul]=true;
        this->connections_map[City::Moscow][City::Tehran]=true;
        this->dise_lvl[City::Mumbai]=0;
        this->city_color[City::Mumbai]=Color::Black;
        this->stations[City::Mumbai]=false;
        this->connections_map[City::Mumbai][City::Karachi]=true;
        this->connections_map[City::Mumbai][City::Delhi]=true;
        this->connections_map[City::Mumbai][City::Chennai]=true;
        this->dise_lvl[City::NewYork]=0;
        this->city_color[City::NewYork]=Color::Blue;
        this->stations[City::NewYork]=false;
        this->connections_map[City::NewYork][City::Montreal]=true;
        this->connections_map[City::NewYork][City::Washington]=true;
        this->connections_map[City::NewYork][City::London]=true;
        this->connections_map[City::NewYork][City::Madrid]=true;  
        this->dise_lvl[City::Osaka]=0;
        this->city_color[City::Osaka]=Color::Red;
        this->stations[City::Osaka]=false;
        this->connections_map[City::Osaka][City::Taipei]=true;
        this->connections_map[City::Osaka][City::Tokyo]=true;
        this->dise_lvl[City::Paris]=0;
        this->city_color[City::Paris]=Color::Blue;
        this->stations[City::Paris]=false;
        this->connections_map[City::Paris][City::Algiers]=true;
        this->connections_map[City::Paris][City::Essen]=true;
        this->connections_map[City::Paris][City::Madrid]=true;
        this->connections_map[City::Paris][City::Milan]=true;
        this->connections_map[City::Paris][City::London]=true;
        this->dise_lvl[City::Riyadh]=0;
        this->city_color[City::Riyadh]=Color::Black;
        this->stations[City::Riyadh]=false;
        this->connections_map[City::Riyadh][City::Baghdad]=true;
        this->connections_map[City::Riyadh][City::Cairo]=true;
        this->connections_map[City::Riyadh][City::Karachi]=true;
        this->dise_lvl[City::SanFrancisco]=0;
        this->city_color[City::SanFrancisco]=Color::Blue;
        this->stations[City::SanFrancisco]=false;
        this->connections_map[City::SanFrancisco][City::LosAngeles]=true;
        this->connections_map[City::SanFrancisco][City::Chicago]=true;
        this->connections_map[City::SanFrancisco][City::Tokyo]=true;
        this->connections_map[City::SanFrancisco][City::Manila]=true;
        this->dise_lvl[City::Santiago]=0;
        this->city_color[City::Santiago]=Color::Yellow;
        this->stations[City::Santiago]=false;
        this->connections_map[City::Santiago][City::Lima]=true;
        this->dise_lvl[City::SaoPaulo]=0;
        this->city_color[City::SaoPaulo]=Color::Yellow;
        this->stations[City::SaoPaulo]=false;
        this->connections_map[City::SaoPaulo][City::Bogota]=true;
        this->connections_map[City::SaoPaulo][City::BuenosAires]=true;
        this->connections_map[City::SaoPaulo][City::Lagos]=true;
        this->connections_map[City::SaoPaulo][City::Madrid]=true;
        this->dise_lvl[City::Seoul]=0;
        this->city_color[City::Seoul]=Color::Red;
        this->stations[City::Seoul]=false;
        this->connections_map[City::Seoul][City::Beijing]=true;
        this->connections_map[City::Seoul][City::Shanghai]=true;
        this->connections_map[City::Seoul][City::Tokyo]=true;
        this->dise_lvl[City::Shanghai]=0;
        this->city_color[City::Shanghai]=Color::Red;
        this->stations[City::Shanghai]=false;
        this->connections_map[City::Shanghai][City::Beijing]=true;
        this->connections_map[City::Shanghai][City::HongKong]=true;
        this->connections_map[City::Shanghai][City::Taipei]=true;
        this->connections_map[City::Shanghai][City::Seoul]=true;
        this->connections_map[City::Shanghai][City::Tokyo]=true;
        this->dise_lvl[City::StPetersburg]=0;
        this->city_color[City::StPetersburg]=Color::Blue;
        this->stations[City::StPetersburg]=false;
        this->connections_map[City::StPetersburg][City::Essen]=true;
        this->connections_map[City::StPetersburg][City::Istanbul]=true;
        this->connections_map[City::StPetersburg][City::Moscow]=true;
        this->dise_lvl[City::Sydney]=0;
        this->city_color[City::Sydney]=Color::Red;
        this->stations[City::Sydney]=false;
        this->connections_map[City::Sydney][City::Jakarta]=true;
        this->connections_map[City::Sydney][City::Manila]=true;
        this->connections_map[City::Sydney][City::LosAngeles]=true;
        this->dise_lvl[City::Taipei]=0;
        this->city_color[City::Taipei]=Color::Red;
        this->stations[City::Taipei]=false;
        this->connections_map[City::Taipei][City::Shanghai]=true;
        this->connections_map[City::Taipei][City::HongKong]=true;
        this->connections_map[City::Taipei][City::Osaka]=true;
        this->connections_map[City::Taipei][City::Manila]=true;
        this->dise_lvl[City::Tehran]=0;
        this->city_color[City::Tehran]=Color::Black;
        this->stations[City::Tehran]=false;
        this->connections_map[City::Tehran][City::Baghdad]=true;
        this->connections_map[City::Tehran][City::Moscow]=true;
        this->connections_map[City::Tehran][City::Karachi]=true;
        this->connections_map[City::Tehran][City::Delhi]=true;    
        this->dise_lvl[City::Tokyo]=0;
        this->city_color[City::Tokyo]=Color::Red;
        this->stations[City::Tokyo]=false;
        this->connections_map[City::Tokyo][City::Seoul]=true;
        this->connections_map[City::Tokyo][City::Shanghai]=true;
        this->connections_map[City::Tokyo][City::Osaka]=true;
        this->connections_map[City::Tokyo][City::SanFrancisco]=true;
        this->dise_lvl[City::Washington]=0;
        this->city_color[City::Washington]=Color::Blue;
        this->stations[City::Washington]=false;
        this->connections_map[City::Washington][City::Atlanta]=true;
        this->connections_map[City::Washington][City::NewYork]=true;
        this->connections_map[City::Washington][City::Montreal]=true;
        this->connections_map[City::Washington][City::Miami]=true;
        this->cures[Color::Red]=false;
        this->cures[Color::Yellow]=false;
        this->cures[Color::Black]=false;
        this->cures[Color::Blue]=false;
        this->City_to_string[City::Algiers]="Algiers";
        this->City_to_string[City::Atlanta]="Atlanta";
        this->City_to_string[City::Baghdad]="Baghdad";
        this->City_to_string[City::Bangkok]="Bangkok";
        this->City_to_string[City::Beijing]="Beijing";
        this->City_to_string[City::Bogota]="Bogota";
        this->City_to_string[City::BuenosAires]="BuenosAires";
        this->City_to_string[City::Cairo]="Cairo";
        this->City_to_string[City::Chennai]="Chennai";
        this->City_to_string[City::Chicago]="Chicago";
        this->City_to_string[City::Delhi]="Delhi";
        this->City_to_string[City::Essen]="Essen";
        this->City_to_string[City::HoChiMinhCity]="HoChiMinhCity";
        this->City_to_string[City::HongKong]="HongKong";
        this->City_to_string[City::Istanbul]="Istanbul";
        this->City_to_string[City::Jakarta]="Jakarta";
        this->City_to_string[City::Johannesburg]="Johannesburg";
        this->City_to_string[City::Karachi]="Karachi";
        this->City_to_string[City::Khartoum]="Khartoum";
        this->City_to_string[City::Kinshasa]="Kinshasa";
        this->City_to_string[City::Kolkata]="Kolkata";
        this->City_to_string[City::Lagos]="Lagos";
        this->City_to_string[City::Lima]="Lima";
        this->City_to_string[City::London]="London";
        this->City_to_string[City::LosAngeles]="LosAngeles";
        this->City_to_string[City::Madrid]="Madrid";
        this->City_to_string[City::Manila]="Manila";
        this->City_to_string[City::MexicoCity]="MexicoCity";
        this->City_to_string[City::Miami]="Miami";
        this->City_to_string[City::Milan]="Milan";
        this->City_to_string[City::Montreal]="Montreal";
        this->City_to_string[City::Moscow]="Moscow";
        this->City_to_string[City::Mumbai]="Mumbai";
        this->City_to_string[City::NewYork]="NewYork";
        this->City_to_string[City::Osaka]="Osaka";
        this->City_to_string[City::Paris]="Paris";
        this->City_to_string[City::Riyadh]="Riyadh";
        this->City_to_string[City::SanFrancisco]="SanFrancisco";
        this->City_to_string[City::Santiago]="Santiago";
        this->City_to_string[City::SaoPaulo]="SaoPaulo";
        this->City_to_string[City::Seoul]="Seoul";
        this->City_to_string[City::Shanghai]="Shanghai";
        this->City_to_string[City::StPetersburg]="StPetersburg";
        this->City_to_string[City::Sydney]="Sydney";
        this->City_to_string[City::Taipei]="Taipei";
        this->City_to_string[City::Tehran]="Tehran";
        this->City_to_string[City::Tokyo]="Tokyo";
        this->City_to_string[City::Washington]="Washington";
        this->Color_to_string[Color::Red]="Red";
        this->Color_to_string[Color::Yellow]="Yellow";
        this->Color_to_string[Color::Black]="Black";
        this->Color_to_string[Color::Blue]="Blue";
        this->cures[Color::Red]=false;
        this->cures[Color::Yellow]=false;
        this->cures[Color::Black]=false;
        this->cures[Color::Blue]=false;
        
    }
    
    int& Board::operator[](const City& city){
        return this->dise_lvl[city];
    }

    bool Board::is_clean(){
        for (auto const& p : this->dise_lvl){
            if(p.second>0){return false;}
        }
        return true;
    }

    std::ostream& operator<<(std::ostream& os, Board & board){
        os<<"Disease lvl:"<<endl;
        for (auto const& p : board.City_to_string){
            os<<p.second<<":"<<board[p.first]<<endl;
        }
        os<<"cures:"<<endl;
        for (auto const& p : board.cures){
            if(p.second){os<<board.Color_to_string[p.first]<<endl;}
        }
        os<<"stations:"<<endl;
        for (auto const& p : board.stations){
            if(p.second){os<<board.City_to_string[p.first]<<endl;}
        }
        return os;
    }
    void Board::remove_cures (){
        for (auto & p : this->cures){
            p.second=false;
        }
    }
    void Board::remove_stations(){
        for (auto & p : this->stations){
            p.second=false;
        }
    }
    bool Board::get_stations(const City& city){
        return this->stations[city];
    }
    bool Board::get_neighbor(const City& city1,const City& city2){
        if(this->connections_map[city1].find(city2)==this->connections_map[city1].end()){return false;}
        return this->connections_map[city1][city2];
    }
    void Board::set_stations(const City& city){
        this->stations[city]=true;
    }
    Color Board::get_color(const City& city){
        return this->city_color[city];
    }
    bool Board::get_cure(const Color& c){
        return this->cures[c];
    }
    void Board::set_cure(const Color& c){
         this->cures[c]=true;
    }
};
