#ifdef TICKETING_SYSTEM
#define TICKETING_SYSTEM
#include <queue>

// Define Ticket structure
struct Ticket {
    int id;
    Ticket(int ticketId):id(ticketId){}
};


#endif