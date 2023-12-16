#include "TicketingSystem.h"
#include <iostream>

int main(){
    TicketingSystem system;

    system.generateTicket();
    system.generateTicket();
    system.generateTicket();

    std::cout<<"Tickets in queue: "<<system.queueSize()<<std::endl;

    system.processTicket();
    system.processTicket();

    std::cout<<"Tickets in queue: "<<system.queueSize()<<std::endl;
    int pause;
    std::cin>>pause;
    return 0;
}