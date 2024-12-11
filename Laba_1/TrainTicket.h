#ifndef TRAINTICKET_H
#define TRAINTICKET_H

#include <string>
#include <iostream>

class TrainTicket {
private:
    std::string fullName;      // ПІБ пасажира
    std::string purchaseTime;  // Час покупки
    double price;              // Вартість квитка
    std::string route;         // Маршрут
    bool isActive;             // Актуальність квитка
    std::string archiveInfo;   // Архівна інформація про користувача
    std::string status;        // Стан квитка (замовлений, відмінений тощо)

public:
    // Конструктори
    TrainTicket();
    TrainTicket(const std::string& name, const std::string& time, double price, const std::string& route,
        bool active, const std::string& archiveInfo, const std::string& status);

    // Методи доступу до полів (геттери)
    std::string getFullName() const;
    std::string getPurchaseTime() const;
    double getPrice() const;
    std::string getRoute() const;
    bool getIsActive() const;
    std::string getArchiveInfo() const;
    std::string getStatus() const;

    // Методи зміни значень (сеттери)
    void setFullName(const std::string& name);
    void setPurchaseTime(const std::string& time);
    void setPrice(double price);
    void setRoute(const std::string& route);
    void setIsActive(bool active);
    void setArchiveInfo(const std::string& info);
    void setStatus(const std::string& status);

    // Метод для відображення інформації
    void displayInfo() const;
};

#endif // TRAINTICKET_H
