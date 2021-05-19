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

#include "Researcher.hpp"

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

  //Discover cure method overiden 
  Player& Researcher::discover_cure(Color color_){
            int count=0;
            //Count number of card in the set (same color)
            for(const auto & city : cards){
              if(color_ == all_colors[city]){
                count++;
              }
            }

            const int size = 5;
            //Cannot discover cure with less than 5 cards
            if(count<size){throw invalid_argument{"you don't have 5 cards"};}
            count = 1;
            //Pass all over the card
            for(auto it = cards.begin(); it != cards.end(); count++){
                if(count == size) { break; }
                if(color_ == all_colors[*it]) {
                    //Use the card to cure
                    it = cards.erase(it);
                }
                else {
                    ++it;
                }
            }
            
            //Add cure to the game for this color
            board_player.add_cure(color_);
    return *this;
  }
}
