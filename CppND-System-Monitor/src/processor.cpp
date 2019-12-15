#include "processor.h"


Processor::Processor() {
    prev_jiffies = 0;
    prev_active_jiffies = 0;
    prev_idle_jiffies = 0;
}

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
    std::vector<std::string> utilization = LinuxParser::CpuUtilization();
    long delta_jiffies = LinuxParser::Jiffies(utilization) - prev_jiffies;
    long delta_active_jiffies = LinuxParser::ActiveJiffies(utilization) - prev_active_jiffies;
    prev_jiffies = LinuxParser::Jiffies(utilization);
    prev_active_jiffies = LinuxParser::ActiveJiffies(utilization);
    prev_idle_jiffies = LinuxParser::IdleJiffies(utilization);
    return float(delta_active_jiffies) / float(delta_jiffies); 
}