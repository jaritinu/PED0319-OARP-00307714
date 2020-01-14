#include <iostream>
#include <string.h>
using namespace std;

int alfa(string c, int n);

int main (void){
    string test1 = "micadena";
    string test2 = "m1c4d3n4";
    int n = test1.length();//obetener el largo de la cadena
    int aux = 0;
    
    aux = alfa(test1,n);
    if (aux == 0){
        cout << "La cadena es alfanumerica"<<endl;
    }
    else{
        cout << "La cadena solamente contiene letras"<<endl;
    }       
    return 0;
}

int alfa(string c, int n){
    int result;
    char aux=' ';
    for(int i=0;i<n;i++){
        aux=c[i];
        if(aux >='0' &&  aux <= '9' ){
            result=0;
            i=n;//se realiza esta accion para terminar el ciclo
        }
        else{
            result=-1;
        }
    }
    return result;
}