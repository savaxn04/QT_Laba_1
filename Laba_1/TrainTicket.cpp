#include "TrainTicket.h"

// Конструктор за замовчуванням
TrainTicket::TrainTicket()
    : fullName(""), purchaseTime(""), price(0.0), route(""), isActive(false), archiveInfo(""), status("Unknown") {}

// Параметризований конструктор
TrainTicket::TrainTicket(const std::string& name, const std::string& time, double price, const std::string& route,
    bool active, const std::string& archiveInfo, const std::string& status)
    : fullName(name), purchaseTime(time), price(price), route(route), isActive(active), archiveInfo(archiveInfo), status(status) {}

// Геттери
std::string TrainTicket::getFullName() const { return fullName; }
std::string TrainTicket::getPurchaseTime() const { return purchaseTime; }
double TrainTicket::getPrice() const { return price; }
std::string TrainTicket::getRoute() const { return route; }
bool TrainTicket::getIsActive() const { return isActive; }
std::string TrainTicket::getArchiveInfo() const { return archiveInfo; }
std::string TrainTicket::getStatus() const { return status; }

// Сеттери
void TrainTicket::setFullName(const std::string& name) { fullName = name; }
void TrainTicket::setPurchaseTime(const std::string& time) { purchaseTime = time; }
void TrainTicket::setPrice(double price) { this->price = price; }
void TrainTicket::setRoute(const std::string& route) { this->route = route; }
void TrainTicket::setIsActive(bool active) { isActive = active; }
void TrainTicket::setArchiveInfo(const std::string& info) { archiveInfo = info; }
void TrainTicket::setStatus(const std::string& status) { this->status = status; }

// Метод для відображення інформації
void TrainTicket::displayInfo() const {
    std::cout << "Passenger Name: " << fullName << "\n"
        << "Purchase Time: " << purchaseTime << "\n"
        << "Price: " << price << "\n"
        << "Route: " << route << "\n"
        << "Active: " << (isActive ? "Yes" : "No") << "\n"
        << "Archive Info: " << archiveInfo << "\n"
        << "Status: " << status << "\n";
}
