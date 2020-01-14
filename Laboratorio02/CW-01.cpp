#include <iostream>
using namespace std;

int main (){
    int array[20];
    for(int i = 0; i < 20; i++){
        cout << "Ingrese la nota: "; cin >> array[i];
    }
    for(int i = 0; i < 20; i++){
        cout << array[i]<<"\t";
    }
    return 0;
}