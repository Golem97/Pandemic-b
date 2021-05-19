/*
===============================================================
>Submission 4.2 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>Pandemic-b
================================================================
*/

//============
/* INCLUDES */
//============

#include "OperationsExpert.hpp"

//=================
/* OperationsExpert: 
//==================

OperationsExpert: Can perform a "construction"
operation in any city he is in,
without throwing a suitable city card. */

namespace pandemic{
  
  // Build overloaded
  // Can build research stationwithout card in the curent_city 
  Player& OperationsExpert::build(){

    board_player.add_station(current_city);

  return *this;
  }
}
