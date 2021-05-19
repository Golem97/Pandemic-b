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
/* Researcher:*/
//==============

/*
===============================================================
Researcher: Can perform a "drug discovery" operation in any city
- does not have to be at a research station.
===============================================================
*/

namespace pandemic{
  class Researcher : public Player{
    private:

    public:
    //Constructor 
    Researcher(Board& board_player_,City city_) : Player(board_player_,city_,"Researcher"){}

    //Methode discover cure overiden
    Player& discover_cure(Color color_);
  };
}
