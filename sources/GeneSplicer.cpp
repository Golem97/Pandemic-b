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

#include "GeneSplicer.hpp"

//=============
/* GeneSplicer: 
//=============

//GeneSplicer: Can perform a "drug discovery" 
operation with the help of 5 cards - not necessarily 
from the color of the disease. */

namespace pandemic{
  //Special discover_cure overloaded
  Player& GeneSplicer::discover_cure(Color color_){

    //Check if there is a stationin the city
    if(!board_player.is_station(current_city)){throw invalid_argument{"there isnt station"};}

    //count the number of card of the set
    int count=0;
    for(const auto & city : cards){
        count++;
    }
    const int size = 5;
    //Can't cure if you haven't 5 Card
    if(count<size){throw invalid_argument{"you don't have 5 cards"};}
    count = 1;
    for(auto it = cards.begin(); it != cards.end(); count++){
        if(count == size) { break; }
        //Drop each card to cure
        it = cards.erase(it);
    }

    //finally add the curesss
    board_player.add_cure(color_);
    return *this;

  }
}
