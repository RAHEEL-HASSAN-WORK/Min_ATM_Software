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
void saveMPINs() {
    ofstream outfile("mpins.txt");
    for (int i = 0; i < size; i++) {
        outfile << usernames[i] << " " << mpins[i] << endl;
    }
    outfile.close();
}

string getHiddenInput() {
    string input = "";
    char ch;
    while ((ch = getch()) != '\r') { // '\r' = Enter key
        if (ch == '\b') { // Backspace
            if (!input.empty()) {
                input.pop_back();
                cout << "\b \b";
            } else if (isdigit(ch)) { // Only accept digits
            input += ch;
            cout << '*';
        }
    } cout << endl;
    return input;
}

int findUserIndex(string usernames[], int size, string inputUser) {
    for (int i = 0; i < size; i++) {
        if (usernames[i] == inputUser) {
            return i; // return index
        }
    }
    return -1; // not found
}

int main(){
loadMPINs();


float balance= 104322.684;
// char name_S[][...]= "Raheel Hassan";
//	int password_S= 7654;
	string name_C;
    string password_C;
    	bool isname;

    return 0;
}
        