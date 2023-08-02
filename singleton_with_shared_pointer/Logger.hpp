#ifndef LOGGER
#define LOGGER
#include <string>
using namespace std;
class Logger
{
    static int instance_count;
    static int ref_count;
    static Logger* logmachine;
    Logger();
    public:
    static Logger * makeLogger();
    void print_log(string msg);
    ~Logger();

    static void p_static_i_count();

    void p_member_i_count();
};

#endif