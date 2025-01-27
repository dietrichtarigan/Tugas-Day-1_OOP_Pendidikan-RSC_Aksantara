#include "Contact.h"

// Konstruktor default
Contact::Contact() : name(""), location(""), address(""), power("") {}

// Konstruktor dengan parameter
Contact::Contact(const std::string& name, const std::string& location, const std::string& address, const std::string& power)
    : name(name), location(location), address(address), power(power) {}

// Metode getter
std::string Contact::getName() const {
    return name;
}

std::string Contact::getLocation() const {
    return location;
}

std::string Contact::getAddress() const {
    return address;
}

std::string Contact::getPower() const {
    return power;
}

// Metode setter 
void Contact::setName(const std::string& newName) {
    name = newName;
}

void Contact::setLocation(const std::string& newLocation) {
    location = newLocation;
}

void Contact::setAddress(const std::string& newAddress) {
    address = newAddress;
}

void Contact::setPower(const std::string& newPower) {
    power = newPower;
}