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

#include "Dispatcher.hpp"

//============
/* Dispatcher: 
//============

//When he is at a research station, he can perform a "direct flight" operation to any city he wants,
 without throwing a city card. */
namespace pandemic {
 
// Special fly_direct overloaded 
Player& Dispatcher::fly_direct(City city_){

        if(current_city==city_) {throw invalid_argument{"you alredy in this city"};}
        if(!board_player.is_station(current_city)) {
                return Player::fly_direct(city_);
        }
        current_city=city_;

        return *this;
}
}
