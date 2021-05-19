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
/* Scientist:*/
//==============

/*
=====================================================================
Scientist: Can perform a "drug discovery" operation using only n cards 
(instead of 5), with the n parameter passed to the constructor
 (in the original game n = 4).
=====================================================================
*/

namespace pandemic{

  class Scientist : public Player{

    private:
      int n;

    public:
    //Constructor 
    Scientist(Board& board_player_,City city_,int n_) : Player(board_player_,city_,"Scientist"),n(n_){}

    //Overiden method "discover_cure" ( to cure with onlu n card)
      Player& discover_cure(Color color_);
  };
}
