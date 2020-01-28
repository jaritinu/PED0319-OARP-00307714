#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

struct node{
    string product;
    float price;
    node* next;
};
void printMenu(void);
string convertString(string product);
node* addElements(node* list,string product, float price);
int searchStock(node* list, string product);

int main (void){
    int option = 0;
    node* list = NULL;
    string product = "";
    float price = 0;
    int auxStock = 0;

    do{
        printMenu(); cin >> option; cin.ignore();

        switch (option)
        {
        case 1:
            cout << "Ingrese datos del producto" << endl;
            cout << "Nombre:\t"; cin>>product;
            cout << "Precio:\t"; cin>>price;
            product = convertString(product);
            list = addElements(list,product,price);
            break;
        case 2:
            cout << "Ingrese el producto a buscar" << endl;
            cout << "Product: \t"; cin>>product;
            product = convertString(product);

            auxStock = searchStock(list,product);

            (auxStock == 0)?cout << "Sin stock" : cout << "Cantidad en stock:\t" << auxStock;

            break;
        case 3:
                cout << "Saliendo..." << endl;

        default:
            break;
        }
    }while(option != 0);


    return 0;
}

void printMenu(void){
    cout << "\nMENU PRINCIPAL" << endl;
    cout << "1.\tAgregar producto" << endl;
    cout << "2.\tBuscar producto" << endl;
    cout << "3.\tSalir" << endl;

}

string convertString(string product){
    string aux = "";
    for(int i = 0; i < product.length(); i++)
        aux += toupper(product[i]);

    return aux;
}

node* addElements(node* list,string product, float price){
    node* newNode = new node;
    newNode->price = price;
    newNode->product = product;
    newNode->next = NULL;

    if(!list)
        list = newNode;
    else
    {
        node* aux = list;

        while(aux->next != NULL)
            aux = aux->next;

        aux->next=newNode;
    } 
}


int searchStock(node* list, string product){
    if(!list)
        return 0;
    else{
        if(product.compare(list->product)==0)
            return 1 + searchStock(list->next,product);
        else
        {
            return 0 + searchStock(list->next,product);
        }
        
    }
}