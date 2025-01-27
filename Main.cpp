#include <iostream>
#include "PhoneBook.h"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Selamat datang di PhoneBook Pak Bell!\n";

    while (true) {
        std::cout << "\nMasukkan perintah (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        // Ubah perintah ke uppercase untuk menghindari kasus (case-insensitive)
        for (auto & c: command) c = toupper(c);

        if (command == "ADD") {
            std::cin.ignore(); // Membersihkan newline dari input sebelumnya
            std::string name, location, address, power;

            std::cout << "Masukkan nama          : ";
            std::getline(std::cin, name);

            std::cout << "Masukkan tempat tinggal: ";
            std::getline(std::cin, location);

            std::cout << "Masukkan alamat        : ";
            std::getline(std::cin, address);

            std::cout << "Masukkan kekuatan      : ";
            std::getline(std::cin, power);

            Contact newContact(name, location, address, power);
            phoneBook.addContact(newContact);
        }
        else if (command == "SEARCH") {
            phoneBook.searchContacts();
            if (phoneBook.getCurrentCount() > 0) {
                int choice;
                std::cout << "Masukkan nomor kontak untuk melihat detail (0 untuk kembali): ";
                std::cin >> choice;
                if (choice > 0 && choice <= phoneBook.getCurrentCount()) {
                    phoneBook.displayContactDetails(choice);
                }
                else if (choice != 0) {
                    std::cout << "Pilihan tidak valid.\n";
                }
            }
        }
        else if (command == "EXIT") {
            std::cout << "Keluar dari program PhoneBook.\n";
            break;
        }
        else {
            std::cout << "Perintah tidak dikenal. Silakan coba lagi.\n";
        }
    }

    return 0;
}