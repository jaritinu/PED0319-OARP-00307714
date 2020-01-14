#include <iostream>
using namespace std;

bool checkPrime(int);

int main(void){
    int sumPrimes = 0;
    bool flag=false;

    for(int i = 2; i < 100;i++){
        if(checkPrime(i)){//si el valor es verdadero se procedera a sumar el numero primo
            sumPrimes+=i;
        }
    }
    cout<<"La suma de los numeros primos entre 1 y 100 es: "<<sumPrimes<<endl;
    return 0;
}

bool checkPrime(int n){
    bool flag = true;//se inicializa verdadero porque en la condicion se probara lo contrario
    for(int j = 2; j <= n/2;j++)
    {
        if ( n%j == 0){
            flag = false;
            break;//termina el ciclo para este numero que no es primo
        }
    }
    return flag;
}