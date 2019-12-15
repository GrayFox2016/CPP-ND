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
    sstream << hour << ":" << minute << ":" << sec;

    return sstream.str(); 
}