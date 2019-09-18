#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *r;
    struct node *l;
};

typedef struct node NODE;
NODE *start = NULL;
NODE *head;

void create(){
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    cout<<"\nENTER DATA: ";
    cin>>temp->data;
    if(start == NULL){
        start = temp;
        head = temp;
    }
    else{
        int a;
        cout<<"1. for Left node.\n2. for Right";
        cin>>a;
        if(a==1){
            head->l = temp;
            head = temp;
        }
        else if(a == 2){
            head->r = temp;
            head = temp;
        }
    }
    head->l = NULL;
    head->r = NULL;
}

void preorder(NODE *temp){
    if(temp!=NULL){
        cout<<"data: "<<temp->data;
        preorder(temp->l);
        preorder(temp->r);
    }
}

int main(){
    int a;
    while(1){
        cout<<"1. CREATE\n2.SHOW\n3.EXIT\n";
        cin>>a;
        if(a==1){
            create();
        }
        else if(a==2){
            NODE *temp = start;
            preorder(temp);
        }
        else if(a==3){
            break;
        }
    }
}