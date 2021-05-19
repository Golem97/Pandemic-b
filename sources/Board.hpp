/*
===============================================================
>Submission 4.2 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>Pandemic-b
================================================================
*/

#pragma once


//============
/* INCLUDES */
//============
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include "City.hpp"
#include "Color.hpp"
#include <utility>
#include <set>
using namespace std;

namespace pandemic{

  class Board{

    private:

      unordered_map<City,int> level_disease; //map level level diseases of each city

      unordered_set<City> research_station;  //All reseach station currently on board

      unordered_set<Color> cure;             //All cure currently founded

      static void loadToConnect();

    public:

      Board(){
        cure={};
        Board::loadToConnect();
      }
      //station
      bool is_station(City c);
      void add_station(City c);
      
      //discover
      void add_cure(Color color);
      bool is_cure(City c);
      //neighbor
      static bool is_connect(City& city1,City& city2);


      bool is_clean();
      void remove_level_disease();
      void remove_stations();
      void remove_cures();
      int & operator[]( City city_ );
      friend ostream& operator<<(ostream& os,const Board& board_);
  };
}
