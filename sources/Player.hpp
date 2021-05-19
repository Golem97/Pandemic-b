/*
===============================================================
>Submission 4.2 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>Pandemic-b
================================================================
*/

#pragma once



//==========
/* PLAYER:*/
//==========

/*
===============================================================
There are different roles of players, who have special skills
(the skills are similar but not the same as the original game):
===============================================================
>OperationsExpert
>Dispatcher
>Scientist
>Researcher
>Medic
>Virologist
>GeneSplicer
>FieldDoctor
*/


//============
/* INCLUDES */
//============

#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <set>
#include <stdexcept>
using namespace std;

namespace pandemic{
  class Player{

    protected:
        Board& board_player;
        set<City> cards;
        City current_city;
        string role_player;

    public:
      //Player Constructor 
      Player(Board& board_player_,City current_,string role_player_):board_player(board_player_),current_city(current_),role_player(role_player_){}

      //Methodes of Player (Same For every type of Player)
      Player& drive(City city_);
      Player& fly_charter(City city_);
      Player& fly_shuttle(City city_);
      Player& take_card(City city_);
      string role();

      //Methode overloaded
      virtual Player& fly_direct(City city_);
      virtual Player& build();
      virtual Player& discover_cure(Color color_);
      virtual Player& treat(City city_);
      virtual void arrive(){};

      
     
     

  };
}
