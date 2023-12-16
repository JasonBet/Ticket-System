// header guards (not necessary but including for generally good practice)
#ifdef TICKETING_SYSTEM
#define TICKETING_SYSTEM
#include <queue>

// Define Ticket structure
struct Ticket {
    int id;
    Ticket(int ticketId):id(ticketId){}
};

class TicketingSystem{
private:
    std::queue<Ticket> tickets;
    int nextTicketId;

public:
    TicketingSystem();
    void generateTicket();
    void processTicket();
    int queueSize() const;
}

#endif