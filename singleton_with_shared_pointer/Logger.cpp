#include "Logger.hpp"
#include <iostream>
using namespace std;

Logger * Logger::logmachine=nullptr;
int Logger::instance_count=0;
int Logger::ref_count = 0;

Logger::Logger()
{
    instance_count++;
    cout<<"LogMachine createed instance count = "<<instance_count<<"\n";
}

Logger * Logger::makeLogger()
{
    if(logmachine == nullptr )
    {
        logmachine = new Logger();
    }
    ref_count++;
    return logmachine;
}

void Logger::print_log(string msg)
{
    cout<<msg<<"\n";
}

Logger::~Logger()
{
    cout<<"Destructor called\n";
    ref_count -- ;

    if(ref_count == 0) // here if we make ref_count <=0 , it will result in infinite recurrsion as delete logmachine is a recursive call 
    //to this destructor only
    {
        instance_count = 0;
        cout<<"here\n";
        delete logmachine;
    }
}

void Logger::p_static_i_count()
{
    cout<<"isc = "<<instance_count<<"\n";
}

void Logger::p_member_i_count()
{
     cout<<"imc = "<<instance_count<<"\n";
}   
