#include <iostream>
using namespace std;

void inverseNatural(int n);
int main (void){
    int x;
    cout << "Digite un numero natural: ";
    cin >> x;

    if(x > 0){
        inverseNatural(x);
        cout << endl;
    }
    else
        cout << "\nError!" << endl;

    return 0;
}

void inverseNatural(int num){
    cout << num % 10;
    if (num > 10)
        inverseNatural(num/10);
}