#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int currentCount;
    int oldestIndex;

public:
    // Konstruktor
    PhoneBook();

    // Metode untuk menambahkan kontak
    void addContact(const Contact& newContact);

    // Metode untuk menampilkan daftar kontak
    void searchContacts() const;

    // Metode untuk menampilkan detail kontak
    void displayContactDetails(int index) const;

    // Metode untuk mendapatkan jumlah kontak saat ini
    int getCurrentCount() const;
};

#endif