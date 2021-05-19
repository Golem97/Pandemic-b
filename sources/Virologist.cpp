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

#include "Virologist.hpp"

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

  // Method Treat Overidden 
  Player& Virologist::treat(City city_){

    //Check if the player is curently in the city that he want to treat
    if(current_city!=city_){
      //The player must have the card to treat this city
      if(!cards.contains(city_)){throw invalid_argument{"you have not the card"};}
      //Drop the card to use it
      cards.erase(city_);
    }
    //Cannot treat the city with level deseas =0
    if(board_player[city_]==0){throw invalid_argument{"This city is alredy clean"};}

    //With cure the level go back to 0
    if(board_player.is_cure(city_)){
      board_player[city_]=0;
    }
    //Withou cure the level --
    else{
      board_player[city_]--;
    }

    return *this;
  }
}
