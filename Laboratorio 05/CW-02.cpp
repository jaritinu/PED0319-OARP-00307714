#include <iostream>
#include <string>

using namespace std;

struct node{
    string content, address;
    float weight;
    node* next;
};

typedef node* st;
void push(st* pSt, string content, string address, float weight);

int main(void){
    st pSt = NULL;
    int option = 0;
    string content, address;
    float weight;

    do{
        cout << "Peso: "; cin >> weight; cin.ignore();
        cout << "Contenido: "; getline(cin,content);
        cout << "Destino: "; getline(cin, address);

        push(&pSt,content,address,weight);

        cout << "Ingresar mas datos (1 = si, 0 = no)\t"; cin >> option;
        cin.ignore();

    }while(option != 0);

    node aux = top(&pSt);
    cout << "Peso: " << aux.weight <<endl;
    cout << "Contenido: " << aux.content <<endl;
    cout << "Direccion: " << aux.address <<endl;

    aux = pop(&pSt);
    
    return 0;
}

void push(st* pSt, string content, string address, float weight){
    node* newNode = new node;
    newNode->content = content;
    newNode->address = address;
    newNode->weight = weight;
    newNode->next = *pSt;

    *pSt = newNode;
}

node top(st* pSt){
    node aux;
    if(!(*pSt)){    
        aux.address="";
        aux.content="";
        aux.weight=0;
        aux.next=NULL;
        return aux;
    }    
    else{
        aux.address=(*pSt)->address;
        aux.content=(*pSt)->content;
        aux.weight=(*pSt)->weight;
    }
    return aux;
}

node pop(st* pSt){
    node aux;
    if(!(*pSt)){    
        aux.address="";
        aux.content="";
        aux.weight=0;
        aux.next=NULL;
        return aux;
    }    
    else{
        aux.address=(*pSt)->address;
        aux.content=(*pSt)->content;
        aux.weight=(*pSt)->weight;
    }
    return aux;
}
