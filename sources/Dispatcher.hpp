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

//============
/* Dispatcher: 
//============

//When he is at a research station, he can perform a "direct flight" operation to any city he wants,
 without throwing a city card. */

namespace pandemic{

  class Dispatcher : public Player{
    
    private:

    public:
    
    Dispatcher(Board& board_player_,City city_) : Player(board_player_,city_,"Dispatcher"){}

    // Special fly_direct overloaded 
    Player& fly_direct(City city_);
  };
}
