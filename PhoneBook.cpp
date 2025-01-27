#include "PhoneBook.h"
#include <iostream>

// Konstruktor
PhoneBook::PhoneBook() : currentCount(0), oldestIndex(0) {}

// Metode untuk menambahkan kontak
void PhoneBook::addContact(const Contact& newContact) {
    if (currentCount < MAX_CONTACTS) {
        contacts[currentCount] = newContact;
        currentCount++;
    }
    else {
        contacts[oldestIndex] = newContact;
        oldestIndex = (oldestIndex + 1) % MAX_CONTACTS;
    }
    std::cout << "Kontak berhasil ditambahkan.\n";
}

// Metode untuk menampilkan daftar kontak
void PhoneBook::searchContacts() const {
    if (currentCount == 0) {
        std::cout << "PhoneBook kosong.\n";
        return;
    }
    std::cout << "\n===== Daftar Kontak =====\n";
    for (int i = 0; i < currentCount; ++i) {
        std::cout << i + 1 << ". " << contacts[i].getName() << std::endl;
    }
    std::cout << "==========================\n";
}

// Metode untuk menampilkan detail kontak
void PhoneBook::displayContactDetails(int index) const {
    if (index < 1 || index > currentCount) {
        std::cout << "Nomor kontak tidak valid.\n";
        return;
    }
    const Contact& contact = contacts[index - 1];
    std::cout << "\n===== Detail Kontak =====\n";
    std::cout << "Nama          : " << contact.getName() << std::endl;
    std::cout << "Tempat Tinggal: " << contact.getLocation() << std::endl;
    std::cout << "Alamat        : " << contact.getAddress() << std::endl;
    std::cout << "Kekuatan      : " << contact.getPower() << std::endl;
    std::cout << "==========================\n";
}

// Metode untuk mendapatkan jumlah kontak saat ini
int PhoneBook::getCurrentCount() const {
    return currentCount;
}