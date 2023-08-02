#include "Logger.hpp"
#include <memory>
int main()
{
    Logger * use1 = Logger::makeLogger();
    Logger * use2 = Logger::makeLogger();

    use1->print_log("hello");
    use2->print_log("world");

    delete use1;

    Logger::p_static_i_count();
    use2->p_member_i_count();
    
    use2->print_log("hi");
    delete use2;

    Logger::p_static_i_count();

    return 0;
}