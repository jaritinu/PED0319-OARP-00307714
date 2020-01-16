#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};
void printInfo(Address printAd);

int main(void){
    Address ad1;

    cout<< "Numero de casa: ";cin>>ad1.houseNumber;
    cin.ignore();
    cout<< "Nombre de ciudad: ";cin>>ad1.city;
    cin.ignore();
    cout<< "Numero de departamaneto: ";cin>>ad1.state;
    cin.ignore();

    printInfo(ad1);

    return 0;
}

void printInfo(Address printAd){
    cout<< "No.de casa:\t "<< printAd.houseNumber<<endl;
    cout<< "Ciudad:\t "<<printAd.city<<endl;
    cout<< "Departamaneto:\t "<<printAd.state<<endl;
}