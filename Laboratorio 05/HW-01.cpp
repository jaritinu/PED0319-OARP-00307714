#include <iostream>
#include <string>
using namespace std;

struct product{
    string name;
    int quantity;
    float price;
};

struct node{
    product aProduct;
    node* next;
};

typedef struct node *productStack;

productStack pStack;

void initialize(productStack* pProduct);
bool empty(productStack* pProduct);
void push(productStack* pProduct, int x);
product top(productStack* pProduct);
product pop(productStack* pProduct);
int stackSize(productStack* pProduct);
void addProduct();
void deleteProduct();
void showProducts();

int main(void){
    
    initialize(&pStack);
    //int numProducts = 0;
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1) Agregar un producto\n";
        cout << "2) Ver productos\n";
        cout << "3) Eliminar producto\n";
        cout << "4) Salir\n";
        cout << "Opcion elegida: ";
        cin >> opcion; cin.ignore();

        switch(opcion){
            case 1: addProduct(); break;
            case 2: showProducts(); break;
            case 3: deleteProduct(); break;
            case 4: continuar = false; break;
            default: cout << "Opcion invalida!\n"; break;
        }
    }while(continuar);
    return 0;
}

void initialize(productStack *pProduct){
    *pProduct = NULL;
}

bool empty(productStack *pProduct){
    return *pProduct == NULL;
}

void push(productStack *pProduct, product x){
    node *newNode = new node;
    newNode->aProduct = x;

    newNode->next = *pProduct;
    *pProduct = newNode;
}

product top(productStack *pProduct){
    if(!empty(pProduct)){
        product e = (*pProduct)->aProduct;
        return e;
    }
    else{
        return {{" "},0,0.0};
    }
}

product pop(productStack* pProduct){
    if(!empty(pProduct)){
        node *aNode = *pProduct;
        product p = (*pProduct)->aProduct;
        *pProduct = (*pProduct)->next;
        delete(aNode);
        return p;
    }
    else{
        return {{" "},0,0.0};
    }
}

int stackSize(productStack *pProduct){
    int countNodes=0;
    productStack auxStack;
    product auxProduct;
    while(!empty(pProduct)){
            auxProduct=pop(pProduct);
            push(&auxStack,auxProduct);
        
            countNodes++;
        }
        while(!empty(&auxStack)){
            auxProduct=pop(&auxStack);
            push(pProduct,auxProduct);
        
            countNodes++;
        }    
    return countNodes;
}

void addProduct(){
    product oneProduct;
    cout << "Nombre de producto: ";   getline(cin, oneProduct.name);
    cout << "Precio: ";   cin >> oneProduct.price;
    cout << "Cantidad: ";  cin >> oneProduct.quantity; cin.ignore();
    push(&pStack, oneProduct);
}

void showProducts(){
    productStack tempStack;
    initialize(&tempStack);

    while(!empty(&pStack)){
        product aProduct = pop(&pStack);
        push(&tempStack, aProduct);

        cout << "\nNombre de producto: " << aProduct.name;
        cout << "\nPrecio: " << aProduct.price;
        cout << "\nCantidad: " << aProduct.quantity<<endl;
    }

    while(!empty(&tempStack)){
        product temp = pop(&tempStack);
        push(&pStack,temp);
    }
}

void deleteProduct(){
    product oneProduct;
    oneProduct = pop(&pStack);
    cout << "\nNombre de producto: " << oneProduct.name;
    cout << "\nPrecio: " << oneProduct.price;
    cout << "\nCantidad: " << oneProduct.quantity <<endl;
}