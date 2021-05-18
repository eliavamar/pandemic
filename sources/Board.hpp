#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <iostream>
#include <vector>
#include <unordered_map>
namespace pandemic {
    class Board {
        void build_board();
        protected:
            std::unordered_map<City,int>dise_lvl;
            std::unordered_map<City,std::unordered_map<City,bool>>connections_map;
            std::unordered_map<City,Color>city_color;
            std::unordered_map<City,bool>stations;
            std::unordered_map<Color,bool>cures;
            std::unordered_map<City,std::string>City_to_string;
            std::unordered_map<Color,std::string>Color_to_string;
        public:
            Board();
            int& operator[](const City& city);
            friend std::ostream& operator<< (std::ostream& os,Board & board);
            void remove_cures ();
            void remove_stations();
            bool get_stations(const City& city);
            bool get_neighbor(const City& city1,const City& city2);
            void set_stations(const City& city);
            Color get_color(const City& city);
            bool is_clean();   
            bool get_cure(const Color& c);
            void set_cure(const Color& c);
    };
};