#include <boost/thread.hpp>
class TestCxx
{
public:
    TestCxx();
    ~TestCxx();
    int a_;
    boost::thread* cmd_;

    void recieve();
    bool is_run_;

    boost::thread* new_thread_;

    void create_thread();
    void delete_thread();
};
