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
    cout<< "Numero de ciudad: ";cin>>ad1.city;
    cout<< "Numero de departamaneto: ";cin>>ad1.state;

    printInfo(ad1);

    return 0;
}

void printInfo(Address printAd){
    cout<< "No.de casa:\t "<< printAd.houseNumber;
    cout<< "Ciudad:\t "<<printAd.city;
    cout<< "Departamaneto:\t "<<printAd.state;
}