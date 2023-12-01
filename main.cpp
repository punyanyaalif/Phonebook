#include <iostream>
#include "temp.h"

using namespace std;

int main(){
    int resp;

    cout << "1. Add Contact\n";
    cout << "2. Show All Contact\n";
    cout << "3. Search Contact\n";
    cout << "4. Exit Program\n";
    cout << "Choose number : ";
    cin >> resp;

    switch(resp){
        case 1:
            cin.ignore();
            obj.AddContact();
            break;
        case 2:
            cin.ignore();
            obj.ShowAll();
            break;
        case 3:
            cin.ignore();
            obj.SearchContact();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Wrong Input... Try again...";
            break;
    }
    return 0;
}