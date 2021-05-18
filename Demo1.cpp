
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "GeneSplicer.hpp"
#include "Medic.hpp"
#include "FieldDoctor.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"


using namespace pandemic;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	Board board; 
	board[City::Chicago] = 3;     
	board[City::Kinshasa] = 2;    
	board[City::MexicoCity] = 3;  
	board[City::Bangkok] = 1; 
	board[City::Chicago] = 1;       
	cout<<"Chicago:"<<board[City::Chicago]<<endl;
	cout<<"Kinshasa:"<<board[City::Kinshasa]<<endl;
	cout<<"MexicoCity:"<<board[City::MexicoCity]<<endl;
	cout<<"Bangkok:"<<board[City::Bangkok]<<endl;
	Medic medic{board,City::Bogota};
	medic.take_card(City::Essen).take_card(City::London).take_card(City::Madrid).take_card(City::Milan).take_card(City::Montreal).take_card(City::Bogota);
	medic.build();
	medic.discover_cure(Color::Blue);
	medic.take_card(City::Chicago).fly_direct(City::Chicago);
	cout<<"Chicago:"<<board[City::Chicago]<<endl;
	board[City::LosAngeles]=5;
	FieldDoctor fieldDoctor(board,City::SanFrancisco);
	fieldDoctor.treat(City::LosAngeles).treat(City::LosAngeles).treat(City::LosAngeles).treat(City::LosAngeles);
	cout<<"LosAngeles:"<<board[City::LosAngeles]<<endl;
	GeneSplicer geneSplicer{board,City::Bogota};
	geneSplicer.take_card(City::Paris).take_card(City::Tokyo).take_card(City::Tehran).take_card(City::Atlanta).take_card(City::Miami);
	geneSplicer.discover_cure(Color::Yellow);
	medic.take_card(City::MexicoCity).fly_direct(City::MexicoCity);
	cout<<"MexicoCity:"<<board[City::MexicoCity]<<endl;
	Researcher researcher{board,City::Madrid};
	researcher.take_card(City::Seoul).take_card(City::Tokyo).take_card(City::Taipei).take_card(City::Sydney).take_card(City::Shanghai);
	researcher.discover_cure(Color::Red);
	board[City::Seoul]=3;
	medic.take_card(City::Seoul).fly_direct(City::Seoul);
	cout<<board[City::Seoul]<<endl;
	Scientist scientist{board,City::Bogota,1};
	board.remove_cures();
	board[City::NewYork]=3;
	medic.take_card(City::NewYork).fly_direct(City::NewYork);
	cout<<board[City::NewYork]<<endl;
	scientist.take_card(City::NewYork).discover_cure(Color::Blue);
	board[City::Montreal]=1;
	medic.take_card(City::Montreal).take_card(City::NewYork).fly_direct(City::Montreal).fly_direct(City::NewYork);
	cout<<board[City::NewYork]<<endl;
	cout<<board<<endl;
	cout<<board.is_clean()<<endl;
	cout<<board<<endl;
	board.remove_cures();
	board.remove_stations();
	cout<<board<<endl;
	}

