#include <iostream> //funciones de entrada y salida de consola
#include <string> //pra usar getline
using namespace std;

struct person{
    string name;
    char gender;
    float salary;
    int age;
    int laboralYears;
};

void retired(person emp);

int main (void){
    person employee;
    cout << "\nDigite el nombre del empleado: ";
    getline(cin,employee.name);
    cout << "\nDigite el genero(m o f): ";
    cin >> employee.gender;
    cout << "\nDigite el salario: ";
    cin >> employee.salary;
    cout << "\nDigite la edad: ";
    cin >> employee.age;
    cout << "\nDigite los anios laborales: ";
    cin >> employee.laboralYears;
    retired(employee);
    return 0;
}
//se deben haber laborado al menos 20 añoos segun nueva ley y tener 55 años para mujeres y 60 hombres
void retired(person emp){
    switch (emp.gender)
    {
    case 'm': 
        if(emp.laboralYears>=20&&emp.age>=60){
            cout << "\n"<< emp.name << " debe estar jubilado" << endl;
        }
        else
        {
            cout << "\n"<< emp.name << " no debe estar jubilado" << endl;
        }
        
        break;
    case 'f':    
        if(emp.laboralYears>=20&&emp.age>=55){
            cout << "\n"<< emp.name << " debe estar jubilada";
        }
        else
        {
            cout << "\n"<< emp.name << " no debe estar jubilada";
        }
        break;
    default:
            cout << "dato erroneo" << endl;
    }
    
}