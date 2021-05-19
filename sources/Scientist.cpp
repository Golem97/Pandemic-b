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

#include "Scientist.hpp"
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

  //Method discover cure overiden
  Player& Scientist::discover_cure(Color color_){
    //Check if there is station in the current city
    if(!board_player.is_station(current_city)){throw invalid_argument{"there is no station"};}

    //Count the number of card 
    int count=0;
    for(const auto & city : cards){
        count++;
    }
  
  //If the number of card <n you can't treat the color
  if(count<n){throw invalid_argument{"you don't have n cards"};}
  count = 1;
  //Use the card to find cure one by one 
  for(auto it = cards.begin(); it != cards.end(); count++){
      //Break for n found
      if(count == n) { break; }
      if(color_ == all_colors[*it]) {
        
          //Drop card used
          it = cards.erase(it);
      }
      else {
          ++it;
      }
  } 
   // Add the cure to the found cure set
    board_player.add_cure(color_);
    return *this;
  }
}
