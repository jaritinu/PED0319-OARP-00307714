#include <iostream>
using namespace std;

int fibonacci(int num);
int main (void){
    int n = 0, r = 0;
    cout << "Digite el para calcular la serie fibonacci: ";
    cin >> n;
    if(n >= 0){
        r=fibonacci(n);
        cout << "El resultado es: " << r << endl;
    }
    else
        cout << "\nError!" << endl;
    return 0;
}

int fibonacci(int num){
    if(num <= 1)
        return num; //caso base para 0 o 1
    else
        return fibonacci(num-2) + fibonacci(num-1);
    
}