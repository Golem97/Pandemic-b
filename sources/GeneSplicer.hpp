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
/* GeneSplicer: 
//=============

//GeneSplicer: Can perform a "drug discovery" 
operation with the help of 5 cards - not necessarily 
from the color of the disease. */

namespace pandemic{

  class GeneSplicer : public Player{
    private:

    public:
    // Constructor 
    GeneSplicer(Board& board_player_,City current_) : Player(board_player_,current_,"GeneSplicer"){}

    //Special discover_cure overloaded
    Player& discover_cure(Color color_);
  };
}
