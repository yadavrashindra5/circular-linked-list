#include<iostream>
using namespace std;
class Node{
int Data;
Node *Next;
public:
    void insert_at_last(int x);
    void insert_at_beginning(int x);
    void delete_last_node();
    void delete_first_node();
    void delete_a_node(int x);
    void print();
};
Node *Head=NULL;
void Node::insert_at_last(int x)
{
    Node*new_Node=new Node();
    new_Node->Data=x;
    new_Node->Next=Head;
    Node *ptr=Head;
    if(Head==NULL)
    {
        Head=new_Node;
        new_Node->Next=Head;
    }
    else
        {
            while(ptr->Next!=Head)
            {
                ptr=ptr->Next;
            }
            ptr->Next=new_Node;


    }
}
void Node::print()
{
    Node *temp=Head;
    while(temp->Next!=Head)
    {
     cout<<temp->Data<<"\n";
     temp=temp->Next;
    }
    cout<<temp->Data<<"\n";
}


void Node::insert_at_beginning(int x)
{   Node *temp=Head;
    Node *new_Node=new Node();
    new_Node->Data=x;
    if(Head==NULL)
    {
        Head=new_Node;
        new_Node->Next=Head;
    }
    else{
        while(temp->Next!=Head)
        {
            temp=temp->Next;
        }
        temp->Next=new_Node;
        new_Node->Next=Head;
        Head=new_Node;
    }
}


void Node::delete_last_node()
{
    Node *ptr,*preptr;
    ptr=Head;
    preptr=ptr;
    if(Head==NULL)
    {
        cout<<"Under Flow\n";
    }
    else{

        while(ptr->Next!=Head)
        {
            preptr=ptr;
            ptr=ptr->Next;

        }
        preptr->Next=ptr->Next;
    }
}

void Node::delete_first_node()
{
    Node*temp=Head;
    if(Head==NULL)
    {
        cout<<"Under Flow\n";
    }
    else{
        while(temp->Next!=Head)
        {
            temp=temp->Next;
        }
        temp->Next=Head->Next;
        Head=temp->Next;

    }
}


void Node::delete_a_node(int x)
{
    Node *ptr,*preptr;
    ptr=Head;
    preptr=ptr;
    if(Head==NULL)
    {
        cout<<"Under Flow\n";
    }
    else{
        while(ptr->Data!=x)
        {
            preptr=ptr;
            ptr=ptr->Next;
        }
        preptr->Next=ptr->Next;
    }
}









int main()
{
    Node n;

    do{
    cout<<"*************************************************************\n";
    cout<<" 1 .Insert a Node at beginning.\n";
    cout<<" 2 .Insert a Node at last.     \n";
    cout<<" 3 .Delete last Node.          \n";
    cout<<" 4 .Delete First Node.         \n";
    cout<<" 5 .Delete a Node.             \n";
    cout<<" 6 .View your Data\n";
    cout<<" 7 .Exit\n";
    cout<<"*************************************************************\n";
    int choice;
    cout<<"Enter your choice\n";
    cin>>choice;
    switch(choice)
        {
        case 1:
            cout<<"Enter the Data you want to store\n";
            int x;
            cin>>x;
            n.insert_at_beginning(x);
            break;
        case 2:
            cout<<"Enter the Data you want to store\n";
            int y;
            cin>>y;
            n.insert_at_last(y);
            break;
        case 3:
            n.delete_last_node();
            break;
        case 4:
            n.delete_first_node();
            break;
        case 5:
            cout<<"Enter the data you want to delete\n";
            cin>>x;
            n.delete_a_node(x);
            break;
        case 6:
            n.print();
            break;

        }
        if(choice==7)
            break;

    }while(true);

}
