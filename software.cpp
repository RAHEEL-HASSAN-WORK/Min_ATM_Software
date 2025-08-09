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
    // bool isname;
    int choice;
    int withdraw;
    int deposit;
    char again;
    // char exit[];
cout<<">>-------Welcome To ATM Services!-------<<"<<"\n \n";

cout<<"Enter the Username... : ";
cin>>name_C;

int index = findUserIndex(usernames, size, name_C)
if (index == -1) {
        cout << "User not found...!\n";
    else {
        cout << "Enter Password... : ";
        password_C = getHiddenInput();
        cout<<endl;
        if(mpins[index] == password_C)
        {
            cout << "***------Access granted. Welcome, " << name_C << "!------***\n \n";
            
    
    do{
        cout<<"1.Fast Cash \n";
        cout<<"2.Withdraw Money \n";
        cout<<"3.Deposit Money \n";
        cout<<"4.Change MPIN \n";
        cout<<"5.Check Balance \n";
        cout<<"6.Additional Options \n";
        cout<<"7.Exit \n \n";

        cout<<"Select the option :";
        cin>>choice;

switch(choice){
    case 1:
            cout<<"Enter the amount... :";
            cin>>withdraw;
            cout<<"you have withdraw: "<<withdraw<<"\n";
            balance -= withdraw;
            break;
}
    }
}
    }
    return 0;
}