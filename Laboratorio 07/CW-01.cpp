#include <iostream>

using namespace std;

struct node
{
    int n;
    bool flag;
    node* next;
};

int main(void){
    node* list = NULL;
    for(int i=0; i<=20;i++)
        list = queue(list,i);

      while(aux->next)
            aux =aux->next;
        
        aux->next =list;
    return 0;
}

node* queue(node* list, int n){
    node* newNode = new node;

    newNode->n = n;
    newNode->flag = true;
    newNode->next = NULL;

    if(list){
        list =newNode;
    }
    else{
        newNode->flag=false;

        node* aux=list;  
    }
}

void print(node* list, int i, int n){
    if(i == 1 && list->n == n){
        return;
    }
    else{
        cout << list->n <<endl;
        print(list->next,1,n);
    }
}