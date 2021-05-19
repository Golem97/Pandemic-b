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

#include "Medic.hpp"

//=======
/* Medic: 
//=======

Paramedic - Medic: When he performs a "disease treatment" operation,
he removes all the disease cubes from the city he is in, and not just one. */

namespace pandemic {

//Overloaded method treat 
Player& Medic::treat(City city_){
        
        //Check if te player is in the good city
        if(current_city!=city_) {throw invalid_argument{"you aren't in the good city"};}

        //Check if the city really need to be treats
        if(board_player[city_]==0) {throw invalid_argument{"the city is alredy clean"};}

        //Treat completly the citys
        board_player[city_]=0;

        return *this;
}

void Medic::arrive() {
        //Cure the city when the medic arrive in the city 
        //if a cure exist in the city sss
        if(board_player.is_cure(current_city)) {
                board_player[current_city] = 0;
        }
}
}
