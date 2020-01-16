#include <iostream>
#include <math.h>
using namespace std;

struct polynomial
{
    float a;
    float b;
    float c;
};

void showSqrt(polynomial p);

int main (void){
    polynomial p1;
    cout << "\nCalculo de raices de un polinomio de 2do grado" << endl << endl; 
    cout << "\nDigite el coeficicente de 2do grado: "; cin >> p1.a;
    cout << "\nDigite el coeficicente de 1er grado: "; cin >> p1.b;
    cout << "\nDigite el termino independiente: "; cin >> p1.c;
    showSqrt(p1);
    return 0;
}

void showSqrt(polynomial p){
    float x1,x2;
    if (p.a!=0){
        if(p.b*p.b-4*p.a*p.c>=0){
            x1=(-p.b+sqrt(p.b*p.b-4*p.a*p.c))/(2*p.a);
            x2=(-p.b-sqrt(p.b*p.b-4*p.a*p.c))/(2*p.a);
            cout << "\nLas raices son: x1 = "<< x1 << " y x2 = "<< x2 << endl;
        }
        else{
            cout << "\nLas raices son complejas."<<endl;
        }
    }
    else if (p.b!=0){
        cout << "\nSolo tiene una raiz: "<< -p.c/p.b <<endl;
        }else{
            cout << "\nNo tiene raices"<<endl;
        }
    
}

