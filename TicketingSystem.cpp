#include "TicketingSystem.h"
#include <iostream>

TicketingSystem::TicketingSystem():nextTicketId(0){}

void TicketingSystem::processTicket(){
    Ticket newTicket(nextTicketId++);
    tickets.push(newTicket);
    std::cout<<"Ticket generated: " << newTicket.id<<std::endl;
}
