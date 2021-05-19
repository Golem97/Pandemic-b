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

//=============
/* FieldDoctor: 
//=============

//Field Doctor - FieldDoctor: Can perform a "disease treatment" 
operation not only in the city he is in but in any city near 
the city he is in (according to the context map), without throwing a city card. */

namespace pandemic{

  class FieldDoctor : public Player{
    private:

    public:
   
    FieldDoctor(Board& board_player_,City current_) : Player(board_player_,current_,"FieldDoctor"){}

  	// Special treat overloaded 
  	Player& treat(City city_);

  };
}
