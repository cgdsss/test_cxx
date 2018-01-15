#include "test.h"
#include <unistd.h>

TestCxx::TestCxx()
{
    a_ = 0;
//    cmd_ = new boost::thread(boost::bind(&TestCxx::recieve, this));
//    is_run_ = true;
}

TestCxx::~TestCxx()
{
    delete cmd_;

}

void TestCxx::recieve()
{
    while(is_run_)
    {
        if(a_ != 0)
        {
//            if (a_ == -3)
//            {
//                std::cout << "go " << std::endl;
//                create_thread();
//            }

//            else if (a_ == -4)
//                delete_thread();
//            else{

                std::cout << "process endl" << std::endl;
//            }
            std::cout << "end: "<< a_ << std::endl;
            a_ = 0;
        }


        sleep(0.1);
    }
}

void TestCxx::create_thread()
{
    new_thread_ = new boost::thread(boost::bind(&TestCxx::recieve, this));
    is_run_ = true;
    std::cout << "create thread" << std::endl;
}
void TestCxx::delete_thread()
{
    is_run_ = false;
//    new_thread_->join();

    delete new_thread_;
    new_thread_ = NULL;
}
