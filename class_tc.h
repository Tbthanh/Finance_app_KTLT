#pragma once
#include <iostream>
#include <stdint.h>
#include <string.h>
//specification file

class DMY
{
    private:
        uint16_t day, month, year;

    public:
        //mutators
        void set_day(uint16_t dayp);        
        void set_month(uint16_t monthp);
        void set_year(uint16_t yearp);

        //accessors
        uint16_t get_day();
        uint16_t get_month();
        uint16_t get_year();
};


class QLCT  :   private DMY
{
    private:
        int32_t money;
        std::string name;
        std::string tag;
        std::string note;

    public:
        //mutators
        void set_money(int32_t moneyp);
        void set_name(std::string namep);
        void set_tag(std::string tagp);
        void set_note(std::string notep);
        
        //accessors
        int32_t get_money();
        std::string get_name();
        std::string get_tag();
        std::string get_note();
};