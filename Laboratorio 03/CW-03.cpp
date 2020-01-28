#include <iostream>
#include <string>
using namespace std;

struct Address
{
    int houseNumber;
    string city, state;
};

struct personalInfo
{
    string name;
    int age;
    Address pAddress;
};
void printInfo(personalInfo *p1, int size, int pos);

int main(void)
{
    personalInfo *pData;
    int size = 0;

    cout << "Cantidad de datos a  ingresar: ";
    cin >> size;
    pData = new personalInfo[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nNombre: ";
        cin >> pData[i].name;
        cout << "\nEdad: ";
        cin >> (pData + i)->age;
        cout << "\nNumero de casa: ";
        cin >> pData[i].pAddress.houseNumber;
        cin.ignore();
        cout << "\nCiudad: ";
        getline(cin, (pData + i)->pAddress.city);

        cout << "\nEstado: ";
        getline(cin, (pData + i)->pAddress.state);
    }

    printInfo(pData, size, 0);
    return 0;
}

void printInfo(personalInfo *p1, int size, int pos)
{
    if (pos == size)
    {
        return;
    }
    else
    {
        printInfo(p1, size, pos + 1);
        cout << "\nNombre: " << p1[pos].name << endl;
        cout << "\nEdad: " << p1[pos].age << endl;
        cout << "\nNumero de casa: " << p1[pos].pAddress.houseNumber << endl;
        cout << "\nCiudad:  " << p1[pos].pAddress.city << endl;
        cout << "\nEstado: " << p1[pos].pAddress.state << endl;
    }
}