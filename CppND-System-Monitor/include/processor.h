#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "linux_parser.h"
#include <vector>
#include <string>

class Processor {
    public:
        Processor();
        float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
    private:
        long prev_jiffies;
        long prev_active_jiffies;
        long prev_idle_jiffies;
};

#endif