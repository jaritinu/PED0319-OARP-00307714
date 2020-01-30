#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

enum genero{a,b,c,d};

struct canciones
{
    string titulo, cantante;
    genero gen;
    int duracion;
};

typedef canciones T;

int main(void){
    T aux;
    string tit ="";
    vector<T> lista;
    queue<T> triste,feliz,dormir;
    int opcion=0,auxEnum=0;
    do{
        imprimirMenu(); cin>>opcion; cin.ignore();
        switch (option)
        {
        case 1:
            cout << "Titulo"; getline(cin,aux.titulo);
            cout << "Cantante"; getline(cin,aux.cantante);
            cout << "Genero(1-a,2-b,3-c,4-d):"; 
            cin>> auxEnum; cin.ignore();auxEnum--;
            aux.gen=genero(auxEnum);
            aux.duracion=0;
            do{
                cout << "Duracion";cin>>aux.duracion;cin.ignore();
            }while(aux.duracion<=0);
            lista.push_back(aux);
            break;
        
        case 2:
            cout << "Cancion a eliminar"; getline(cin,tit);
            for(auto iter=lista.begin();iter!=lista.end();iter++){
                if(iter->titulo.compare(tit))
                    iter = lista.erase(iter);
                else
                    iter++;   
            }

            break;

        case 3:
            for(T elemento: lista){
                cout << elemento.cantante << endl;
                cout << elemento.titulo << endl;
                cout << elemento.duracion << endl;
                switch (elemento.gen)
                {
                case a:
                    cout << 'a';
                    break;
                case b:
                    cout << 'b';
                    break;
                case c:
                    cout << 'c';
                    break;
                case d:
                    cout << 'd';
                    break;
                }
            }
            cout <<endl;

            break;

        case 4:
            cout << "Cancion a buscar:"; getline(cin,tit);
            cout << "Agregar en (1 triste 2 feliz 3 dormir";
            cin>> auxEnum;cin.ignore();
            switch (auxEnum)
            {
            case 1:
                buscarElemento(lista,&triste,tit);
                break;
            
            case 2:
            buscarElemento(lista,&feliz,tit);
                break;
           
            case 3:
            buscarElemento(lista,&dormir,tit);
            break;
            }
            break;
        }

    }while(opcion!=0);
    return 0;
}

void imprimirMenu(void){
    cout << "Agregar cancion"<<endl;
    cout << "Eliminar cancion;"<<endl;
    cout << "mostar cancion;"<<endl;
    cout << "buscar cancion;"<<endl;
    cout << "Salir;"<<endl;
}

void buscarElemento(vector<T> canciones, queue<T>*cola, string tit){
    for(T elemento: canciones){
        if(elemento.titulo.compare(tit)==0){
            cout <<"Cancion encontrada";
            (*cola).push(elemento);
            return;
        }
    }
    cout <<"Cancion no encontrada";
}