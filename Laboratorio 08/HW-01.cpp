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

void insertInTree(node** tree, string word);
completeName solicitarDato();

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
            case 2: recorrerArbol(arbol); break;
            case 3: continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);


    insertInTree(&pTree, "Hola");
    insertInTree(&pTree, "Pupusas");
    insertInTree(&pTree, "Codigo");
    insertInTree(&pTree, "Adios");
    insertInTree(&pTree, "F");
    return 0;
}

node* createleaf(string word){
    node * leaf = new node;
    leaf->person.lastName = word;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf; 
}

void insertInTree(node** tree, string word){
    if(!(*tree)){
        *tree = createleaf(word);
    }
    else{
        if(word.compare((*(*tree)).person.lastName)<=0)
            insertInTree(&(*(*tree)).left,word);
        else
            insertInTree(&(*(*tree)).right,word);
    }
}
completeName solicitarDato(){
    completeName unDato;

    cin >> unDato.name; cin.ignore();
    cin >> unDato.lastName; cin.ignore();
    return unDato;
}