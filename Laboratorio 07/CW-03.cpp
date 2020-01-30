#include <iostream>
#include <string>

using namespace std;

struct pedido
{
    string remitente,destinatario;
    char tipo, modadlidad;
    int peso;
};

struct cola{
    pedido elemento;
    cola* sig;
};

int main(void){
    pedido aux;
    int opcion =0;
    cola* pInicio=NULL;
    
    do{
        cout<<"Remitente";getline(cin,aux.remitente);
        cout<<"Destinatario";getline(cin,aux.destinatario);
        cout<<"Tipo";cin>>aux.tipo;cin.ignore();
        cout<<"Modalidad";cin>>aux.modadlidad;cin.ignore();
        cout<<"Peso";cin>>aux.peso;cin.ignore();

        pInicio=queue(pIncio,aux);

        cout<<"mas pedidos si o no";
        cin>>opcion;cin.ignore();
    }while(opcion!=0);
    cout<<"Total por sus pedidos"<<calcularTotal(pInicio);
    cout<<"adios";

    return 0;
}

pedido* queue(cola* c, pedido elemento){
    cola* nuevo= new cola;
    nuevo->elemento = elemento;
    nuevo->sig = NULL;

    if(c!)
        c=nuevo;
    else
    {
        cola* aux=c;
        while(aux->sig)
            aux=aux->sig;
        aux->sig=nuevo;
    }
    
}

float calcularTotal(cola* lista){
    if(!lista)
    return;
    else
    {
        float sub=0;
        switch(lista->elemento.tipo){
            case 'c':
                switch (lista->elemento.modadlidad)
                {
                case 'u':
                    sub = 2;
                    break;
                
                case 'n':
                    sub = 3;
                    break;

                case 'i':
                    sub = 5;
                    break;
                }
            
            break;
            case 'p':
                switch (lista->elemento.modadlidad)
                {
                case 'u':
                    if(lista->elemento.peso<=500)
                        sub=10;
                    else
                    {
                        sub=50;
                    }
                    
                    break;
                
                case 'n':
                    sub = 3;
                    break;

                case 'i':
                    sub = 5;
                    break;
                }
            
            break;
        }
    return sub+calcularTotal(lista);
    }
    
}