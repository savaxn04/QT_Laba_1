#include "TrainTicket.h"
#include <iostream>

int main() {
    // Створення об'єкта на стеку
    TrainTicket ticket1("John Doe", "2024-12-11 10:00", 125.50, "Kyiv-Lviv", true, "Regular Customer", "Booked");
    std::cout << "Ticket 1 (Stack):\n";
    ticket1.displayInfo();

    // Створення об'єкта на купі
    TrainTicket* ticket2 = new TrainTicket("Jane Smith", "2024-12-11 15:30", 200.75, "Odesa-Kyiv", false, "First Time", "Cancelled");
    std::cout << "\nTicket 2 (Heap):\n";
    ticket2->displayInfo();

    // Зміна значень у першому квитку
    ticket1.setPrice(150.00);
    ticket1.setStatus("Updated");
    std::cout << "\nUpdated Ticket 1:\n";
    ticket1.displayInfo();

    // Звільнення пам'яті
    delete ticket2;

    return 0;
}
