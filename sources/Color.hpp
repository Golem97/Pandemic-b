/*
===============================================================
>Submission 4.2 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>Pandemic-b
================================================================
*/

#pragma once
#include <unordered_map>
enum Color  {Blue,Yellow,Black,Red};
 
//Get all the colors 

static std::unordered_map< Color,std::string > colors =
{
        {Color::Blue,"Blue"},
        {Color::Yellow,"Yellow"},
        {Color::Black,"Black"},
        {Color::Red,"Red"}
};
