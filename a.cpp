#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Menginisialisasi generator angka acak
    srand(time(0));

    // Membuat angka acak
    int randomNumber = rand() % 100 + 1;

    // Inisialisasi variabel tebakan dan jumlah tebakan
    int guess;
    int numGuesses = 0;

    // Loop utama
    while (true)
    {
        // Meminta input tebakan dari pengguna
        cout << "Tebak angka (1-100): ";
        cin >> guess;

        // Meningkatkan jumlah tebakan
        numGuesses++;

        // Mengecek apakah tebakan benar
        if (guess == randomNumber)
        {
            cout << "Tebakan benar!" << endl;
            cout << "Anda menebak dalam " << numGuesses << " kali tebakan." << endl;
            break;
        }
        else if (guess < randomNumber)
        {
            cout << "Tebakan terlalu rendah." << endl;
        }
        else
        {
            cout << "Tebakan terlalu tinggi." << endl;
        }
    }

    return 0;
}
