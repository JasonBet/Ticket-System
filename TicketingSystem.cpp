#include "TicketingSystem.h"
#include <iostream>

TicketingSystem::TicketingSystem():nextTicketId(0){}

void TicketingSystem::processTicket(){
    Ticket newTicket(nextTicketId++);
    tickets.push(newTicket);
    std::cout<<"Ticket generated: " << newTicket.id<<std::endl;
}

void TicketingSystem::processTicket(){
    if(!tickets.empty()){
        Ticket currentTicket=tickets.front();
        tickets.pop();
        std::cout<<"Ticket processed: "<<currentTicket.id<<std::endl;
    }
    else{
        std::cout<<"No tickets to process."<<std::endl;
    }
}

int TicketingSystem::queueSize() const{
    return tickets.size();
}