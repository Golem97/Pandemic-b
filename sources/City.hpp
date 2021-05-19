/*
===============================================================
>Submission 4.2 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>Pandemic-b
================================================================
*/

#pragma once
#include <unordered_map>
#include <string>
#include <set>
#include "Color.hpp"
using namespace std;
//48 Cities, 12 of each color
enum City {
    Algiers,Atlanta,Baghdad,Bangkok,
    Beijing,Bogota,BuenosAires,Cairo,Chennai,
    Chicago,Delhi,Essen,HoChiMinhCity,
    HongKong,Istanbul,Jakarta,Johannesburg,
    Karachi,KePasio,Khartoum,Kinshasa,
    Kolkata,Lagos,Lima,London,LosAngeles,
    Madrid,Manila,MexicoCity,Miami,Milan,
    Montreal,Moscow,Mumbai,NewYork,Osaka,
    Paris,Riyadh,SanFrancisco,Santiago,
    SaoPaulo,Seoul,Shanghai,StPetersburg,
    Sydney,Taipei,Tehran,Tokyo,Washington};



static std::unordered_map<City,std::string> citie ={
        {City::Algiers,"Algiers"},
        {City::Atlanta,"Atlanta"},
        {City::Baghdad,"Baghdad"},
        {City::Bangkok,"Bangkok"},
        {City::Beijing,"Beijing"},
        {City::Bogota,"Bogota"},
        {City::BuenosAires,"BuenosAires"},
        {City::Cairo,"Cairo"},
        {City::Chennai,"Chennai"},
        {City::Chicago,"Chicago"},
        {City::Delhi,"Delhi"},
        {City::Essen,"Essen"},
        {City::HoChiMinhCity,"HoChiMinhCity"},
        {City::HongKong,"HongKong"},
        {City::Istanbul,"Istanbul"},
        {City::Jakarta,"Jakarta"},
        {City::Johannesburg,"Johannesburg"},
        {City::Karachi,"Karachi"},
        {City::KePasio,"KePasio"},
        {City::Khartoum,"Khartoum"},
        {City::Kinshasa,"Kinshasa"},
        {City::Kolkata,"Kolkata"},
        {City::Lagos,"Lagos"},
        {City::Lima,"Lima"},
        {City::London,"London"},
        {City::LosAngeles,"LosAngeles"},
        {City::Madrid,"Madrid"},
        {City::Manila,"Manila"},
        {City::MexicoCity,"MexicoCity"},
        {City::Miami,"Miami"},
        {City::Milan,"Milan"},
        {City::Montreal,"Montreal"},
        {City::Moscow,"Moscow"},
        {City::Mumbai,"Mumbai"},
        {City::NewYork,"NewYork"},
        {City::Osaka,"Osaka"},
        {City::Paris,"Paris"},
        {City::Riyadh,"Riyadh"},
        {City::SanFrancisco,"SanFrancisco"},
        {City::Santiago,"Santiago"},
        {City::SaoPaulo,"SaoPaulo"},
        {City::Seoul,"Seoul"},
        {City::Shanghai,"Shanghai"},
        {City::StPetersburg,"StPetersburg"},
        {City::Sydney,"Sydney"},
        {City::Taipei,"Taipei"},
        {City::Tehran,"Tehran"},
        {City::Tokyo,"Tokyo"},
        {City::Washington,"Washington"}
       };

       static unordered_map<City,set<City>> all_connect;

        // static unordered_map<City,Color> all_colors;
       static unordered_map<City, Color> all_colors {

           { City::Algiers, Color::Black },
           { City::Atlanta, Color::Blue },
           { City::Baghdad, Color::Black },
           { City::Bangkok, Color::Red },
           { City::Beijing, Color::Red },
           { City::Bogota, Color::Yellow },
           { City::BuenosAires, Color::Yellow },
           { City::Cairo, Color::Black },
           { City::Chennai, Color::Black },
           { City::Chicago, Color::Blue },
           { City::Delhi, Color::Black },
           { City::Essen, Color::Blue },
           { City::HoChiMinhCity, Color::Red },
           { City::HongKong, Color::Red },
           { City::Istanbul, Color::Black },
           { City::Jakarta, Color::Red },
           { City::Johannesburg, Color::Yellow },
           { City::Karachi, Color::Black },
           { City::Khartoum, Color::Yellow },
           { City::Kinshasa, Color::Yellow },
           { City::Kolkata, Color::Black },
           { City::Lagos, Color::Yellow },
           { City::Lima, Color::Yellow },
           { City::London, Color::Blue },
           { City::LosAngeles, Color::Yellow },
           { City::Madrid, Color::Blue },
           { City::Manila, Color::Red },
           { City::MexicoCity, Color::Yellow },
           { City::Miami, Color::Yellow },
           { City::Milan, Color::Blue },
           { City::Montreal, Color::Blue },
           { City::Moscow, Color::Black },
           { City::Mumbai, Color::Black },
           { City::NewYork, Color::Blue },
           { City::Osaka, Color::Red },
           { City::Paris, Color::Blue },
           { City::Riyadh, Color::Black },
           { City::SanFrancisco, Color::Blue },
           { City::Santiago, Color::Yellow },
           { City::SaoPaulo, Color::Yellow },
           { City::Seoul, Color::Red },
           { City::Shanghai, Color::Red },
           { City::StPetersburg, Color::Blue },
           { City::Sydney, Color::Red },
           { City::Taipei, Color::Red },
           { City::Tehran, Color::Black },
           { City::Tokyo, Color::Red },
           { City::Washington, Color::Blue }
       };
