#include <iostream>
#include <string.h>
using namespace std;

int alfa(string c, int n);

int main (void){
    string test1 = "micadena";
    string test2 = "m1c4d3n4";
    int n = test1.length();
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
            i=n;
        }
        else{
            result=-1;
        }
    }
    return result;
}