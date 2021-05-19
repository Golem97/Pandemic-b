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

#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

//=================
/* OperationsExpert: 
//==================

OperationsExpert: Can perform a "construction"
operation in any city he is in,
without throwing a suitable city card. */

namespace pandemic{
  class OperationsExpert : public Player{
 
    public:

    //Constructor 
    OperationsExpert(Board& board_player_,City city_) : Player(board_player_,city_,"OperationsExpert"){}

    //Overloaded method build
        Player& build();
      
  };
} 
