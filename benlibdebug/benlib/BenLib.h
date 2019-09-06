#include <stdint.h>
#include <autogen/lib.h>
// #include <boost/array.hpp>
// #include <boost/asio.hpp>

// using namespace autogen;
// using boost::asio::ip::udp;

class BenLib {
private:
    uint32_t myValue;
public:
    void setValue(uint32_t);
    uint32_t getValue();
    void incValue();

};

class comm {
private:
public:
    comm();
    // uint32_t sendPacket(const packet::traj3dof*);
};