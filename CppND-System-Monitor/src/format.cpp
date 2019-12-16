#include <string>

#include "format.h"

using std::string;

// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) { 
    std::stringstream sstream;
    int hour = seconds / 3600;
    int minute = (seconds % 3600) / 60;
    int sec = seconds % 60;

    string s_hour;
    string s_minute;
    string s_sec;


    s_hour = hour < 10 ? "0" + std::to_string(hour) : std::to_string(hour);
    s_minute = minute < 10 ? "0" + std::to_string(minute) : std::to_string(minute);
    s_sec = sec < 10 ? "0" + std::to_string(sec) : std::to_string(sec);


    // if (sec < 10) {
    //     sstream << hour << ":" << minute << ":0" << sec;
    // } else {
    sstream << s_hour << ":" << s_minute << ":" << s_sec;
    // }
    
    return sstream.str(); 
}