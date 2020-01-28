#include<iostream>
#include <string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};

struct personalInfo{
    Address personalAddress;
    string name;
    int age;
};

int main (void){
    personalInfo p1;

    cout << "\nNombre: "; getline(cin, p1.name) ;
    cout << "\nEdad: "; cin >>p1.age;
    cout << "\nNumero de casa"; cin >> p1.personalAddress.houseNumber;
    cout << "\nCiudad:  ";getline(cin, p1.personalAddress.city);
    cout << "\nEStado: "; getline(cin,p1.personalAddress.state);
    
    return 0;
}