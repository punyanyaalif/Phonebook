#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class temp{
    string yourname, phonenumber, youraddress, description, search;
    fstream file;
    public :
        void AddContact();
        void ShowAll();
        void SearchContact();
}obj;

void temp :: AddContact(){
    cout << "Enter Your Name : ";
    getline(cin, yourname);

    cout << "Enter Phone Number : ";
    getline(cin, phonenumber);

    cout << "Enter Your Address : ";
    getline(cin, youraddress);

    cout << "Enter Description : ";
    getline(cin, description);

    file.open("contactbook.csv", ios :: out | ios :: app);
    file << yourname << "," << phonenumber << "," << youraddress << "," << description << "\n";
    file.close(); 
}

void temp :: ShowAll(){
    file.open("contactbook.csv", ios :: in);

    getline(file, yourname,',');
    getline(file, phonenumber, ',');
    getline(file, youraddress, ',');
    getline(file, description, '\n');

    while(!file.eof()){
        cout << "Your Name : " << yourname << endl;
        cout << "Phone Number : " << phonenumber << endl;
        cout << "Address : " << youraddress << endl;
        cout << "Description : " << description << endl;

        getline(file, yourname,',');
        getline(file, phonenumber, ',');
        getline(file, youraddress, ',');
        getline(file, description, '\n');
    }
    file.close();
}

void temp :: SearchContact(){
    cout << "Search Phone Number : "; 
    getline(cin, search);

    file.open("contactbook.csv", ios :: in);

    getline(file, yourname, ',');
    getline(file, phonenumber, ',');
    getline(file, youraddress, ',');
    getline(file, description, '\n');

    while(!file.eof()){
        if(phonenumber == search){
            cout << "Your Name : " << yourname << endl;
            cout << "Phone Number : " << phonenumber << endl;
            cout << "Address : " << youraddress << endl;
            cout << "Description : " << description << endl;

            getline(file, yourname,',');
            getline(file, phonenumber, ',');
            getline(file, youraddress, ',');
            getline(file, description, '\n');            
        } else {
            cout << "Sorry, Phone Number not found...!";

            getline(file, yourname,',');
            getline(file, phonenumber, ',');
            getline(file, youraddress, ',');
            getline(file, description, '\n');
        }
    }
    file.close();
}

