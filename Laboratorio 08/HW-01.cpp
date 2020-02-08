#include <iostream>
#include <string>

using namespace std;

struct completeName{
    string name,lastName;
};


struct node{
    completeName person;
    node* left,* right;
};

node* createleaf(completeName cname);

void insertInTree(node** tree, completeName cname);
void solicitarDato(node * pTree);
void recorrerArbol(node * pTree);
void postOrder(node* pTree);
void preOrder(node* pTree);
void inOrder(node* pTree);

int main (void){
    node * pTree = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nMenu: \n";
        cout << "\t1) Agregar\n";
        cout << "\t2) Recorrer\n";
        cout << "\t3) Salir\n";
        cout << "\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: solicitarDato(pTree); break;
            case 2: recorrerArbol(pTree); break;
            case 3: continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);

    return 0;
}

node* createleaf(completeName cname){
    node * leaf = new node;
    leaf->person = cname;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf; 
}

void insertInTree(node** tree, completeName cname){
    if(!(*tree)){
        *tree = createleaf(cname);
    }
    else{
        if(cname.lastName.compare((*(*tree)).person.lastName)<=0)
            insertInTree(&(*(*tree)).left,cname);
        else
            insertInTree(&(*(*tree)).right,cname);
    }
}
void solicitarDato(node * pTree){
    completeName cname;
    cout << "Nombre: " ;    cin >> cname.name; cin.ignore();
    cout << "\nApellido: " ;    cin >> cname.lastName; cin.ignore();
    insertInTree(&pTree, cname);
    
}

void recorrerArbol(node * pTree){
     cout << "Imprimiendo en preOrder" << endl;
    preOrder(pTree); cout << endl << endl;

    cout << "Imprimiendo en inOrder" << endl;
    inOrder(pTree); cout << endl << endl;

    cout << "Imprimiendo en postOrder" << endl;
    postOrder(pTree); cout << endl << endl;
    
}

void postOrder(node* pTree){
    if(!pTree)
        return;
    else{
        postOrder(pTree->left);
        postOrder(pTree->right);
        cout << pTree->person.lastName << " " << pTree->person.name << "\t";
        
    }
}

void preOrder(node* pTree){
    if(!pTree)
        return;
    else{
        cout << pTree->person.lastName << " " << pTree->person.name << "\t";
        preOrder(pTree->left);
        preOrder(pTree->right);
    }
}

void inOrder(node* pTree){
    if(!pTree)
        return;
    else{
        inOrder(pTree->left);
        cout << pTree->person.lastName << " " << pTree->person.name << "\t";
        inOrder(pTree->right);
    }
}