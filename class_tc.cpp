//preprocessor header goes here
#include <iostream>
#include <stdint.h>
#include <string.h>
#include "class_tc.h"

//Define function for DMY class
void DMY::set_day(uint16_t dayp)
{
    day = dayp;
}

void DMY::set_month(uint16_t monthp)
{
    month = monthp;
}

void DMY::set_year(uint16_t yearp)
{
    year = yearp;
}
uint16_t DMY::get_day()
{
    return day;
}
uint16_t DMY::get_month()
{
    return month;
}
uint16_t DMY::get_year()
{
    return year;
}

//define fuction for QLCT class
void QLCT::set_money(int32_t moneyp)
{
    
}
void QLCT::set_name(std::string namep)
{
    name = namep;
}
void QLCT::set_tag(std::string tagp)
{
    tag = tagp;
}
void QLCT::set_note(std::string notep)
{
    note = notep;
}
int32_t QLCT::get_money()
{
    return money;
}
std::string QLCT::get_name()
{
    return name;
}
std::string QLCT::get_tag()
{
    return tag;
}
std::string QLCT::get_note()
{
    return note;
}

