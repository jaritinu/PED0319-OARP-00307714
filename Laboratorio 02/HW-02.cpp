#include <iostream> //funciones de entrada y salida de consola
#include <string> //pra usar getline
using namespace std;

struct Employee{
    string DUI;
    string name;
    int yearContract;
    float salary;
};

void estimateSalary(Employee *p, int size);

int main(void){
    Employee* array;
    int n=0;
    cout << "Digite el numero de empleados: "; cin >> n;
    array = new Employee[n];

    for (int i = 0; i < n; i++){
        cout << "Digite el DUI: "; cin >> array->DUI;
        cin.ignore();
        cout << "Digite el nombre: "; getline(cin,array->name);
        cout << "Digite el año de contrato: "; cin >> array->yearContract;
        cout << "Digite el salario: "; cin >> array->salary;
        array+=1;//incrementar la posiscion del arreglo
    }
    array-=n;//inicializar el arreglo a la posicion inicial
    estimateSalary(array,n);
    return 0;
}

void estimateSalary(Employee *p, int size){
    for (int i = 0; i < size; i++){
        cout << "\nEl total ganado de " << p->DUI <<" "<< p->name << "es:  $"<< (p->yearContract*12)*p->salary << endl;
        p+=1;//incrementar la posiscion del arreglo
    }
}