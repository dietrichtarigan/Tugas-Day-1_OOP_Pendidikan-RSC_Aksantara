# Tugas-Day-1_OOP_Pendidikan-RSC_Aksantara

# PhoneBook Pak Bell

## Deskripsi

**"Duh, Pak Bell Butuh Bantuanku"** adalah sebuah program aplikasi PhoneBook yang ditulis dalam bahasa C++. Program ini dirancang untuk membantu Pak Bell dalam mengelola kontak teman-temannya sebagai bagian dari rencana kejutan melamarnya. Dengan aplikasi ini, pengguna dapat menambahkan, mencari, dan melihat detail kontak dengan batas maksimal 8 kontak tanpa menggunakan dynamic memory allocation.

## Fitur

- **ADD**: Menambahkan kontak baru ke PhoneBook. Program menerima nama, tempat tinggal, alamat, dan kekuatan (misalnya: Pyro, Cryo, Anemo, dll).
- **SEARCH**: Menampilkan daftar nama kontak yang tersimpan. Pengguna dapat memilih nomor kontak untuk melihat detail lengkap.
- **EXIT**: Mengakhiri program. Semua data kontak akan hilang setelah program ditutup.

## Struktur File

Proyek ini terdiri dari beberapa file untuk menjaga keteraturan dan modularitas kode. Berikut adalah struktur file proyek:

```
Tugas-Day-1_OOP_Pendidikan-RSC_Aksantara-/
│
├── Contact.h
├── Contact.cpp
├── PhoneBook.h
├── PhoneBook.cpp
└── Main.cpp
```

- **Contact.h**: Mendefinisikan kelas `Contact` yang menyimpan informasi individu kontak.
- **Contact.cpp**: Mengimplementasikan metode-metode dari kelas `Contact`.
- **PhoneBook.h**: Mendefinisikan kelas `PhoneBook` yang mengelola kumpulan kontak.
- **PhoneBook.cpp**: Mengimplementasikan metode-metode dari kelas `PhoneBook`.
- **Main.cpp**: Program utama yang mengelola antarmuka pengguna dan interaksi dengan kelas `PhoneBook`.

Copy perintah berikut untuk mengompilasi program menggunakan `g++`:

```bash
g++ -o PhoneBook Main.cpp Contact.cpp PhoneBook.cpp
```

Setelah berhasil dikompilasi tanpa error, jalankan program dengan perintah berikut:

- **Linux/macOS:**
    ```bash
    ./PhoneBook
    ```

- **Windows:**
    ```bash
    PhoneBook.exe
    ```

## Cara Penggunaan

Program akan meminta perintah dari pengguna. Berikut adalah perintah yang tersedia dan cara menggunakannya:

### ADD

Menambahkan kontak baru ke PhoneBook.

**Langkah-langkah:**

1. Masukkan perintah `ADD`.
2. Masukkan informasi kontak berikut secara berurutan:
   - **Nama**
   - **Tempat Tinggal**
   - **Alamat**
   - **Kekuatan**

**Contoh:**

```
Masukkan perintah (ADD, SEARCH, EXIT): ADD
Masukkan nama          : Neng Fischl
Masukkan tempat tinggal: Mondstadt
Masukkan alamat        : Somewhere Street
Masukkan kekuatan      : Electro
Kontak berhasil ditambahkan.
```

### SEARCH

Menampilkan daftar kontak dan melihat detail kontak tertentu.

**Langkah-langkah:**

1. Masukkan perintah `SEARCH`.
2. Program akan menampilkan daftar nama kontak yang tersimpan.
3. Masukkan nomor kontak untuk melihat detailnya (atau 0 untuk kembali).

**Contoh:**

```
Masukkan perintah (ADD, SEARCH, EXIT): SEARCH

===== Daftar Kontak =====
1. Neng Fischl
2. Neng Ayaka
==========================
Masukkan nomor kontak untuk melihat detail (0 untuk kembali): 1

===== Detail Kontak =====
Nama          : Neng Fischl
Tempat Tinggal: Mondstadt
Alamat        : Somewhere Street
Kekuatan      : Electro
==========================
```

### EXIT

Mengakhiri program.

**Contoh:**

```
Masukkan perintah (ADD, SEARCH, EXIT): EXIT
Keluar dari program PhoneBook.
```

## Contoh Interaksi Program

Berikut adalah contoh interaksi lengkap dengan program:

![image](https://github.com/user-attachments/assets/da54be40-6a30-48bf-b65a-2c3eefe6d4e0)


## Catatan

- **Maksimal 8 Kontak**: PhoneBook dapat menyimpan maksimal 8 kontak. Jika Anda menambahkan lebih dari 8 kontak, kontak terlama akan digantikan oleh kontak baru secara otomatis.
- **Tidak Ada Penyimpanan Permanen**: Program ini tidak menyimpan data kontak secara permanen. Semua data akan hilang setelah program diakhiri.
- **Penggunaan Array Statis**: Sesuai dengan batasan soal, program ini menggunakan array statis untuk menyimpan kontak dan tidak menggunakan dynamic memory allocation seperti `new` atau `malloc`.

## Peningkatan atau Fitur Tambahan (Opsional)

Jika Anda ingin mengembangkan program lebih lanjut, berikut beberapa ide fitur tambahan:

1. **Penghapusan Kontak**:
   - Menambahkan perintah untuk menghapus kontak tertentu berdasarkan nomor atau nama.

2. **Penyimpanan dan Pemulihan Data**:
   - Menyimpan kontak ke dalam file sehingga data tidak hilang saat program ditutup.
   - Memuat kontak dari file saat program dijalankan kembali.

3. **Pencarian Berbasis Nama atau Kekuatan**:
   - Menambahkan fitur pencarian yang memungkinkan pengguna mencari kontak berdasarkan nama atau jenis kekuatan.

4. **Validasi Input yang Lebih Baik**:
   - Menambahkan validasi yang lebih canggih untuk input pengguna, seperti memastikan kekuatan yang dimasukkan adalah salah satu yang diterima (Pyro, Cryo, Anemo, dll.).

