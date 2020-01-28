#include<iostream>
using namespace std;

int addNumber(int limit, int aux);

int main(void){
    cout << addNumber(10,1) << endl;
    return 0;
}

int addNumber(int limit, int aux){
    if(aux==limit){
        return aux;
    }
    else{
        return aux + addNumber(limit, aux+1);
    }
}
