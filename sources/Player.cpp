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

//==========
/* PLAYER:*/
//==========

/*
===============================================================
There are different roles of players, who have special skills
(the skills are similar but not the same as the original game):
===============================================================
>OperationsExpert
>Dispatcher
>Scientist
>Researcher
>Medic
>Virologist
>GeneSplicer
>FieldDoctor
*/

namespace pandemic{

  //Drive from a city to an other (only if they are connected) 
  Player& Player::drive(City city_){

    //Can't drive to the current city of the player
    if(current_city==city_){throw invalid_argument{"you alredy in this city"};}

    //Check if the city of destination is connected to the current city
    if(!Board::is_connect(current_city,city_)) {throw invalid_argument{"not connected"};}

    //Drive
    current_city=city_;
    //If th eplayer is a medic apply treat 
    arrive();

    return *this;
  }

  //Fly to a city using the card  
  Player& Player::fly_direct(City city_){

    //Check if the player have the card 
    if(!cards.contains(city_)){throw invalid_argument{"you have not the card of this city "};}

    //Check if the player is already in the city he want fly to
    if(current_city==city_){throw invalid_argument{"you alredy here"};}

    //Drop the card used
    cards.erase(city_);
    //Change the city of thge player 
    current_city=city_;
    //If the player is a medic apply treat 
    arrive();
    return *this;
  }

  //The curently city card is used to fly anywere
  Player& Player::fly_charter(City city_){
    
    //Can't fly if haven't the card of the current city
    if(!cards.contains(current_city)){throw invalid_argument{"you have not a card"};}

    //Can't fly to the city you curently
    if(current_city==city_){throw invalid_argument{"you alredy in this city"};}

    //Drop the curent city card to fly
    cards.erase(current_city);
    //Fly
    current_city=city_;
    //Medic treatement
    arrive();
    return *this;
  }

  //Can't reach cities with stations  
  Player& Player::fly_shuttle(City city_){

     //Can't fly to the city you curently
    if(current_city==city_){throw invalid_argument{"you alredy in this city"};}
    //Check if there is 2 Stations in the cities
    if(board_player.is_station(current_city)&&board_player.is_station(city_)) {
      current_city=city_;
    }else{
      //If there is not station can't fly
      throw invalid_argument{"there is no station"};
    }
    //Medic Treatement
    arrive();
    return *this;
  }

  // Use the current city to  build research station
  Player& Player::build(){
    //Without card canot build
    if(!cards.contains(current_city)){throw invalid_argument{"you have not a card"};}

    //Add station for this city
    board_player.add_station(current_city);

    //Drop the card
    cards.erase(current_city);

  return *this;
  }

  // Discover Cure using 5 card of the same color if there is a research station in the city
  Player& Player::discover_cure(Color color_){

        //Canot discover cure without station
        if(!board_player.is_station(current_city)){throw invalid_argument{"there isnt station"};}

        //Count the Colors cards
        int count=0;
        for(const auto & city : cards){
          if(color_ == all_colors[city]){
            count++;
          }
        }
        //Check if the player have enought cards
        const int size = 5;
        if(count<size){throw invalid_argument{"you don't have 5 cards"};}
        count = 1;
        for(auto it = cards.begin(); it != cards.end(); count++){
            if(count == size) { break; }
            if(color_ == all_colors[*it]) {
                it = cards.erase(it);
            }
            else {
                ++it;
            }
        }

        //Add cure to the board for this color

        board_player.add_cure(color_);
    return *this;
  }

  //Treat using cure => level[city]=0
  //Treat without cure => level --
  Player& Player::treat(City city_){
    //Check if the player is in the city he want to treat
    if(current_city!=city_){throw invalid_argument{"you not in this city"};}

    //Check if the level of deases is not 0
    if(board_player[city_]==0){throw invalid_argument{"you alredy clean"};}

    //Treat with cure
    if(board_player.is_cure(city_)){
      //Level of deases =0
      board_player[city_]=0;
    }
    //Treat without cure
    else{
      //level of deseas -1
      board_player[city_]--;
    }

    return *this;
  }

  // Returns the role of the player
  string Player::role(){

    return role_player;
  }

  // Player take random card
  Player& Player::take_card(City city_){
    //Add the card to the set of card of the player
    cards.insert(city_);
    return *this;
  }
}
