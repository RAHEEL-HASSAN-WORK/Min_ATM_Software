#include<iostream>
#include<cctype>
#include<string>
#include <conio.h>
#include <fstream>
using namespace std;

string usernames[20] = {
    "user1", "admin", "raheel", "guest", "alpha",
    "beta", "gamma", "delta", "zara", "nashit",
    "sana", "fahad", "aisha", "osama", "laiba",
    "noor", "yasir", "hamza", "zain", "iqra"
};

string mpins[20];
int size =20;

void loadMPINs() {
    ifstream infile("mpins.txt");
    if (!infile) {
        cout << "No MPIN file found. Using default values.\n";
        string defaultMpins[20] = {
            "1234", "1111", "4567", "9999", "2222",
            "3333", "4444", "5555", "6666", "7777",
            "8888", "1212", "3434", "5656", "7878",
            "9090", "1010", "1313", "1515", "1717"
        };
        for (int i = 0; i < size; i++) {
            mpins[i] = defaultMpins[i];
        }
        return;
    }
}