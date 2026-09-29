# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Haidar Az Zacky - 109082530035</p>

## Dasar Teori

C++ adalah bahasa pemrograman yang diciptakan oleh Bjarne Stroustrup di AT&T Bell Laboratories pada awal tahun 1980-an berdasarkan bahasa C ANSI. Pada awalnya bahasa ini disebut "C with class", kemudian disempurnakan dengan fasilitas pembebanlebihan operator dan fungsi sehingga menjadi C++ [3]. Bahasa C++ banyak digunakan dalam praktikum Struktur Data karena mendukung pemrograman prosedural sekaligus tipe data bentukan seperti struktur [1][2]. Pada praktikum ini, program ditulis dan dijalankan menggunakan Code::Blocks, yaitu IDE yang bersifat *free*, *open-source*, dan *cross-platform* [3].

### A. Tipe Data dan Variabel<br/>
Data merupakan suatu nilai yang dapat dinyatakan dalam bentuk konstanta atau variabel. Berdasarkan jenisnya, data dibagi menjadi tipe data dasar, yaitu bilangan bulat, bilangan real presisi tunggal, bilangan real presisi ganda, karakter, dan tak-bertipe [3].
#### 1. Tipe data `int`
Digunakan untuk menyimpan bilangan bulat, misalnya `int nilai;`. Tipe ini dipakai pada soal nomor 2 dan 3 untuk menyimpan angka masukan dari pengguna.
#### 2. Tipe data `float`
Digunakan untuk menyimpan bilangan real (desimal) dengan presisi tunggal, berukuran 4 byte dengan jangkauan 3.4e-38 s.d. 3.4e+38 [3]. Tipe ini dipakai pada soal nomor 1 agar kalkulator dapat memproses bilangan pecahan.
#### 3. Variabel
Variabel digunakan untuk menyimpan nilai yang dapat berubah-ubah selama program berjalan dan harus dideklarasikan terlebih dahulu dengan bentuk `tipe_data nama_variabel;` [3].

### B. Input dan Output<br/>
Pada C++, operasi masukan dan keluaran dilakukan melalui pustaka `<iostream>` [2][3].
#### 1. `cout`
Fungsi `cout` bersama operator `<<` digunakan untuk mencetak data numerik maupun teks ke layar, baik konstanta maupun variabel [3].
#### 2. `cin`
Fungsi `cin` bersama operator `>>` digunakan untuk meminta masukan dari keyboard dan langsung menyimpannya ke variabel tanpa memerlukan penentu format seperti pada `printf()` [3].
#### 3. Escape sequence
Notasi seperti `\n` (baris baru) dan `\t` (tabulasi) digunakan untuk mengatur tampilan keluaran. Selain itu, `endl` juga dapat dipakai untuk berpindah baris [3].

### C. Operator<br/>
Operator adalah simbol yang digunakan untuk melakukan suatu operasi atau manipulasi [3].
#### 1. Operator aritmatika
Terdiri dari penjumlahan (`+`), pengurangan (`-`), perkalian (`*`), pembagian (`/`), dan sisa pembagian (`%`). Operator `/` pada dua bilangan bulat menghasilkan pembagian bulat, sedangkan operator `%` menghasilkan sisa bagi, yang bermanfaat untuk memisahkan puluhan dan satuan pada soal nomor 2 [3].
#### 2. Operator hubungan dan logika
Operator seperti `<`, `>`, `<=`, `>=`, `==`, `!=`, `&&`, dan `||` digunakan untuk membentuk kondisi bernilai benar atau salah [3].
#### 3. Operator increment dan decrement
Operator `++` menambah nilai variabel sebesar 1, sedangkan `--` menguranginya sebesar 1 [3].

### D. Kondisional dan Perulangan<br/>
Pengambilan keputusan dalam C++ dilakukan dengan pernyataan `if`, `if-else`, dan `switch`, sedangkan perulangan dilakukan dengan `for`, `while`, dan `do...while` [3].
#### 1. Pernyataan `if` dan `if-else`
Jika kondisi bernilai benar maka pernyataan pertama dijalankan, dan jika salah maka pernyataan pada `else` yang dijalankan [3].
#### 2. Perulangan `for`
Berbentuk `for (inisialisasi; kondisi; increment/decrement)`. Perulangan ini cocok digunakan ketika jumlah pengulangan sudah diketahui [3].
#### 3. Perulangan bersarang (*nested loop*)
Perulangan yang berada di dalam perulangan lain, digunakan untuk mencetak pola yang terdiri dari baris dan kolom seperti pada soal nomor 3.

## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan bertipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;

    cout << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (b != 0)
        cout << a << " / " << b << " = " << a / b << endl;
    else
        cout << a << " / " << b << " = tidak dapat dibagi dengan nol" << endl;

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%201/Output-Unguided1-1.png)

Contoh keluaran (input 12.5 dan 4):
```
Masukkan bilangan pertama : 12.5
Masukkan bilangan kedua   : 4

12.5 + 4 = 16.5
12.5 - 4 = 8.5
12.5 * 4 = 50
12.5 / 4 = 3.125
```

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%201/Output-Unguided1-2.png)

Program ini mendeklarasikan dua variabel bertipe `float`, yaitu `a` dan `b`, yang nilainya dibaca dari keyboard menggunakan `cin`. Setelah itu program menampilkan hasil keempat operasi aritmatika (`+`, `-`, `*`, `/`) menggunakan `cout`. Tipe `float` dipilih agar bilangan pecahan dapat diproses dengan benar. Sebelum melakukan pembagian, program memeriksa dengan pernyataan `if-else` apakah `b` bernilai 0, karena pembagian dengan nol tidak dapat dilakukan. Jika `b` sama dengan 0, program menampilkan pesan bahwa pembagian tidak dapat dilakukan.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan",
                       "sepuluh", "sebelas"};
    int n;

    cout << "Masukkan angka (0 - 100) : ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Angka harus berada pada rentang 0 sampai 100" << endl;
    } else {
        cout << n << " : ";
        if (n <= 11) {
            cout << satuan[n];
        } else if (n < 20) {
            cout << satuan[n - 10] << " belas";
        } else if (n < 100) {
            cout << satuan[n / 10] << " puluh";
            if (n % 10 != 0) {
                cout << " " << satuan[n % 10];
            }
        } else {
            cout << "seratus";
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%202/Output-Unguided2-1.png)

Contoh keluaran:
```
Masukkan angka (0 - 100) : 77
77 : tujuh puluh tujuh
```

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%202/Output-Unguided2-2.png)

Program menyimpan kata untuk angka 0 sampai 11 di dalam array `satuan`, lalu memakai `if-else` bertingkat untuk menentukan cara penulisan sesuai rentang angka:
- **0 s.d. 11**: langsung diambil dari array `satuan` (misalnya 0 = "nol" dan 11 = "sebelas").
- **12 s.d. 19**: satuan diambil dengan `n - 10` lalu ditambah kata "belas" (misalnya 15 = "lima belas").
- **20 s.d. 99**: puluhan diambil dengan `n / 10` lalu ditambah kata "puluh", dan satuan diambil dengan `n % 10` jika tidak sama dengan 0 (misalnya 77 = "tujuh puluh tujuh").
- **100**: dicetak "seratus".

Jika angka di luar rentang 0 sampai 100, program menampilkan pesan kesalahan.

### 3. Buatlah program yang dapat memberikan input dan output sbb. (Mirror)

```
input: 3
output:
3 2 1 * 1 2 3
  2 1 * 1 2
    1 * 1
      *
```

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

    for (int i = n; i >= 0; i--) {
        // spasi di awal agar pola rata tengah
        for (int s = 0; s < 2 * (n - i); s++) {
            cout << " ";
        }
        // angka menurun di sisi kiri
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "*";
        // angka menaik di sisi kanan
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%203/Output-Unguided3-1.png)

Contoh keluaran (input 3):
```
input: 3
output:
3 2 1 * 1 2 3
  2 1 * 1 2
    1 * 1
      *
```

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/HaidarZackk/Struktur_Data_Modul01_Haidar_Zacky/blob/main/SS%20UNGUIDED%203/Output-Unguided3-2.png)

Program menggunakan perulangan bersarang. Perulangan luar dengan variabel `i` berjalan dari `n` turun sampai 0, dan setiap iterasinya mencetak satu baris. Pada setiap baris terdapat empat bagian:
1. Perulangan pertama mencetak `2 * (n - i)` spasi agar pola tampak rata tengah (bertambah 2 spasi tiap baris).
2. Perulangan kedua mencetak angka menurun dari `i` sampai 1 di sisi kiri.
3. Tanda `*` dicetak di tengah.
4. Perulangan ketiga mencetak angka menaik dari 1 sampai `i` di sisi kanan.

Pada baris terakhir (`i = 0`), tidak ada angka yang dicetak sehingga hanya tanda `*` yang muncul, sesuai dengan contoh pada soal.

## Kesimpulan
Dari praktikum Modul 1 ini dapat disimpulkan bahwa Code Blocks dapat digunakan sebagai lingkungan pengembangan untuk membuat, meng compile, dan menjalankan program C++ sederhana. Melalui tiga soal latihan, praktikan mempraktikkan penggunaan tipe data dan variabel (`int`, `float`), operator aritmatika dan operator hubungan, operasi masukan/keluaran dengan `cin` dan `cout`, pernyataan kondisional `if-else`, serta perulangan `for` bersarang untuk membentuk pola. Pemahaman dasar ini menjadi bekal penting untuk mempelajari materi struktur data pada modul-modul berikutnya.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>[3] Modul 01 Struktur Data: Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Fakultas Informatika, Telkom University.
