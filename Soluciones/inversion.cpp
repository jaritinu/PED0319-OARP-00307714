#include <iostream>
using namespace std;

//void copyArray(int *p1, int *p2, int size);
void invertirArreglo(int *A, int *B, int size);
int main(void)
{
    int *A, *B;
    int n = 0;
    /*do{
        cout << "Digite el tamaño del arreglo: "; cin >> n;
    
    }while(n<2);
    */
    cout << "Digite el tamaño del arreglo: ";
    cin >> n;
    if (n < 2)
    {
        cout << " Error, debe ser mayor que 2";
        return 0;
    }
    A = new int[n];
    B = new int[n];

    for (int i; i < n; i++)
    {
        cout << "Digite el elemento " << i + 1 << ": " << endl;
        cin >> A[i];
    }

    //copyArray(A,B,n);
    invertirArreglo(A, B, n);
    cout << "Arreglo normal: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << "\n\nArreglo invertido: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}

void copyArray(int *p1, int *p2, int size)
{
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        p2[j] = p1[i];
    }
}
//otra forma
void invertirArreglo(int *A, int *B, int size)
{
    int aux = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        B[aux] = A[i];
        aux++;
    }
}