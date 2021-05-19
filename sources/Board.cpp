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
#include "Board.hpp"
#include <vector>
#include <string>
#include <sstream>


namespace pandemic {
//station
bool Board::is_station(City c){
        return research_station.contains(c);
}
void Board::add_station(City c){
        research_station.insert(c);
}
//discover
void Board::add_cure(Color color){
        cure.insert(color);
}
bool Board::is_cure(City c){

        return cure.contains(all_colors.at(c));
}
//neighbor
bool Board::is_connect(City& city1,City& city2){
        return all_connect.at(city1).contains(city2);
}

void Board::remove_stations(){
        research_station.clear();
}

void Board::remove_cures(){
        cure.clear();
}
//returns true if and only if the whole board is clean (no disease on board)
bool Board::is_clean(){
        for(auto & p :this->level_disease) {
                if(p.second!= 0) {
                        return false;
                }
        }
        return true;
}
//clear the bord od deseas
void Board::remove_level_disease(){
        level_disease.clear();
}

//Square bracket operator [] - accepts as city-ID parameter,
// and allows to read and update the level of the disease (= number of disease cubes)
int & Board::operator[]( City city_ ){
        return this->level_disease[city_];
}


//Print the Board :
// 1) Level of disease 
// 2) The cures discovered 
// 3) The Research Stations 


ostream& operator<<(ostream& os,const Board& board_){
        // unordered_map<City,int> level_disease; //map containg cities (City) as keys and level of disease (int) as values
        //
        // unordered_set<City> research_station;
        //
        // unordered_set<Color> cure;
        os<<"*********level disease*********"<<endl;
        for(const auto & p : board_.level_disease) {
                os<< citie[p.first]<<" "<< p.second<<endl;
        }
        os<<"*********research station*********"<<endl;
        for(const auto & city : board_.research_station) {
                os<< citie[city]<<endl;
        }
        os<<"*********cure*********"<<endl;
        for(const auto & color : board_.cure) {
                os<< colors[color]<<endl;
        }
        return os;
}

City get_enum_city(string const & str){
        //Turn String to city 
        for(auto & p : citie) {
                if(p.second==str) {
                        return p.first;
                }
        }
        return City::Algiers;
}

Color get_enum_Color (string const & str){
		//Turn String to color
        for(auto & p : colors) {
                if(p.second==str) {
                        return p.first;
                }
        }
        return Color::Blue;
}

//Get the informations from (citie_map)

void  Board::loadToConnect(){

        string myText;
        // Read the text 
        ifstream MyReadFile("cities_map.txt");
        //Read each line one by one 
        while (getline (MyReadFile, myText)) {

                string buf;
                stringstream ss(myText);

                int i=0;
                
                City city=City::Algiers;
                Color color=Color::Blue;
                //Pass all over the text (each buf is word)
                while (ss >> buf) {

                        if(i==0) {
                                city = get_enum_city(buf);
                        }
                        if(i == 1) {
                            
                        }
                        if(i>1) {
                                City c = get_enum_city(buf);

                                all_connect[city].insert(c);
                        }

                        i++;
                }
        }

        // Close 
        MyReadFile.close();
}
}
