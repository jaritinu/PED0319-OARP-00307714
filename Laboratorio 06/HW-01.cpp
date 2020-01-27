#include <iostream>
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

node* push(node* pProduct, int x);
node* top(node* pProduct);

int main(void){
    node* pProduct = NULL;
    return 0;
}

node* push(node* pProduct, product x){
    node* newNode = new node;
    newNode->aProduct = x;

    newNode->next = pProduct;
    pProduct = newNode;
}

node* top(node* pProduct){
    if(!pProduct)
        return NULL;
    else{
        pProduct->next = NULL;
        return pProduct;
    }
}