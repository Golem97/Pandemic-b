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
#include "FieldDoctor.hpp"

//=============
/* FieldDoctor: 
//=============

//Field Doctor - FieldDoctor: Can perform a "disease treatment" 
operation not only in the city he is in but in any city near 
the city he is in (according to the context map), without throwing a city card. */

namespace pandemic{

  
  // Special treat overloaded 
  Player& FieldDoctor::treat(City city_){

  	//check if the player is not already on the city he want to go  
    if(current_city != city_ && !Board::is_connect(current_city,city_)){throw invalid_argument{"you are not connected"};}
    
    //check if the city is  not already without deases
    if(board_player[city_]==0){throw invalid_argument{"you alredy clean"};}

    //check if there cure was fond for this city 
    if(board_player.is_cure(city_)){
      //If there is a cure level of deases go to 0	
      board_player[city_]=0;
    }else{
       //If not lvl -1
      board_player[city_]--;
    }

    return *this;
  }
}
