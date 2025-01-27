#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
    std::string name;
    std::string location;
    std::string address;
    std::string power;

public:
    // Konstruktor default
    Contact();

    // Konstruktor dengan parameter
    Contact(const std::string& name, const std::string& location, const std::string& address, const std::string& power);

    // Metode getter
    std::string getName() const;
    std::string getLocation() const;
    std::string getAddress() const;
    std::string getPower() const;

    // Metode setter 
    void setName(const std::string& newName);
    void setLocation(const std::string& newLocation);
    void setAddress(const std::string& newAddress);
    void setPower(const std::string& newPower);
};

#endif