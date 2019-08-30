#include "BenLib.h"

void BenLib::setValue(uint32_t v) {
    myValue = v;
}

uint32_t BenLib::getValue() {
    return myValue;
}

void BenLib::incValue() {
    myValue++;
}

comm::comm() {
    char* host = "192.168.1.103";

    try
    {
        boost::asio::io_context io_context;

        udp::resolver resolver(io_context);
        udp::endpoint reciever_endpoint = 
            *resolver.resolve(udp::v4(), host, "comm").begin();
        
        udp::socket socket(io_context);
        socket.open(udp::v4());

        boost::array<char, 1> send_buf = {{ 0 }};
        socket.send_to(boost::asio::buffer(send_buf), reciever_endpoint);

        boost::array<char, 128> recv_buff;
        udp::endpoint sender_endpoint;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

uint32_t comm::sendPacket(const packet::traj3dof* data) {
    // see https://www.boost.org/doc/libs/1_71_0/doc/html/boost_asio/tutorial/tutdaytime4.html
    boost::asio::ip::address address;

    // TODO(ben): load trajectory data 

    serializable::traj3dof<topic::traj3dof::UNDEFINED> ser_data;
    ser_data = *data;
    uint8 buffer[4096] = {0,};
    ser_data.serialize(buffer);

    char* buff = (char*) buff;

    // TODO(ben): write udp packet
    // mp_udp->writeDatagram(buff,ser_data.size(),QHostAddress("192.168.1.103"),6000);

    return 0;
}