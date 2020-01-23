#include <iostream>
#include <string>

using namespace std;

struct whiteLine{
    string name;
    float cost;
    float price;
};

float sumTotal(whiteLine* array, int size, int aux);
void fillArray(whiteLine* array, int size,int aux);

int main(void){
    
    int n = 0;
    cout << "Digite la cantidad de elementos: "; cin >> n;
    cin.ignore();
    whiteLine* electro;
    electro = new whiteLine[n];
    if(n >= 2){
        fillArray(electro,n,0);
        float r =0;        
        r = sumTotal(electro,n,0);
        cout << "El total es: $" << r << endl;
    }
    else    
        cout << "Error!" << endl;
    return 0;
}

float sumTotal(whiteLine* array, int size, int aux){
    float sum=0;
    if(size == aux){
        return 0;
    }
    else{
        sum = sum + array[aux].price;
        return sum + sumTotal(array,size,aux+1);
    }
}
void fillArray(whiteLine* array, int size,int aux){
    if(size == aux)
        return;
    else{
        cout << "Nombre: "; getline(cin, array[aux].name);
        cout << "Costo: "; cin >> array[aux].cost;
        cout << "Precio: "; cin>> array[aux].price;
        cin.ignore();

        fillArray(array,size,aux+1);
    }
}