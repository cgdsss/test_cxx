#include <iostream>
#include "test.h"
#include <unistd.h>

void go()
{
    while(1)
    {
        std::cout << "=11111=2" << std::endl;
        sleep(1);
    }
}

int main (int argc, char** argv)
{
    int a = 0;

    boost::thread* t = new boost::thread(boost::bind(&go));
//    t->detach();
    std::cout << t->joinable() ;
//    delete t;
//    t = NULL;
    while(1)
    {
        std::cout << "main " << std::endl;
        sleep(1);
    }
//    TestCxx test;
//    while(1)
//    {
//        std::cin >> a;
//        std::cout << "recieve " << a << std::endl;
//        if (a != 0)
//            test.a_ = a;
//        sleep(0.1);

//        if (a == -1)
//            test.is_run_ = false;

//        if (a == -2)
//            test.is_run_ = true;
//        if (a == -3)
//            test.create_thread();
//        if (a == -4)
//            test.delete_thread();
//    }
}
