#include <iostream>
#include <stdlib.h>
using namespace std;

void fillArray(int *p, int n);
void sumMulti(int *p, int n);
void showArray(int *p, int n);
int main(void){
    int array[15];
    fillArray(array,15);
    showArray(array,15);
    sumMulti(array,15);
    return 0;
}

void fillArray(int *p, int n){
    int num=0;
    for( int i = 0; i <= n; i++){
        num=1+rand()%(76-1);//genera los aletarios en ese rango
        *(p+i)=num;
    }
}

void sumMulti(int *p, int n){
    int sumNum=0;
    for(int i = 0; i < n;i++){
        if(*(p+i)%7 == 0){//si el valor es multiplo se procedera a acumular el numero
            sumNum+=*(p+i);
        }
    }
    cout<<"\nLa suma es: "<<sumNum<<endl;
}
void showArray(int *p, int n){
    for( int i = 0; i <= n; i++){
        cout<< *(p+i) << " ";
    }
}