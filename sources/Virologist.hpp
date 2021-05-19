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

//==============
/* Virologist:*/
//==============

/*
=====================================================================
Virologist: Can perform a "disease treatment" operation, not only 
in the city in which it is located, but in any city in the world - 
by throwing a card of that city.
=====================================================================
*/

namespace pandemic{

  class Virologist : public Player{
    private:

    public:
    //Constructor 
    Virologist(Board& board_player_,City city_) : Player(board_player_,city_,"Virologist"){}

    // Method Treat Overidden
    Player& treat(City city_);
  };
}
