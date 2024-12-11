#ifndef TRAINTICKET_H
#define TRAINTICKET_H

#include <string>
#include <iostream>

class TrainTicket {
private:
    std::string fullName;      // ϲ� ��������
    std::string purchaseTime;  // ��� �������
    double price;              // ������� ������
    std::string route;         // �������
    bool isActive;             // ����������� ������
    std::string archiveInfo;   // ������� ���������� ��� �����������
    std::string status;        // ���� ������ (����������, �������� ����)

public:
    // ������������
    TrainTicket();
    TrainTicket(const std::string& name, const std::string& time, double price, const std::string& route,
        bool active, const std::string& archiveInfo, const std::string& status);

    // ������ ������� �� ���� (�������)
    std::string getFullName() const;
    std::string getPurchaseTime() const;
    double getPrice() const;
    std::string getRoute() const;
    bool getIsActive() const;
    std::string getArchiveInfo() const;
    std::string getStatus() const;

    // ������ ���� ������� (�������)
    void setFullName(const std::string& name);
    void setPurchaseTime(const std::string& time);
    void setPrice(double price);
    void setRoute(const std::string& route);
    void setIsActive(bool active);
    void setArchiveInfo(const std::string& info);
    void setStatus(const std::string& status);

    // ����� ��� ����������� ����������
    void displayInfo() const;
};

#endif // TRAINTICKET_H
