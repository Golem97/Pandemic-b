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

//=======
/* Medic: 
//=======

Paramedic - Medic: When he performs a "disease treatment" operation,
he removes all the disease cubes from the city he is in, and not just one. */

namespace pandemic{

  class Medic : public Player{
    private:

    public:
    //Constructor
    Medic(Board& board_player_,City city_) : Player(board_player_,city_,"Medic"){}

    //Overloaded method treat 
    Player& treat(City city_);

    void arrive();
  };
}
