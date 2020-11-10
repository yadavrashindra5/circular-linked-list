#include<iostream>
using namespace std;
class Node{
int Data;
Node *Next;
public:
    void insert_at_last(int x);
    void insert_at_beginning(int x);
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

int main()
{
    Node n;
    n.insert_at_last(8);
    n.insert_at_last(9);
    n.insert_at_last(10);
    n.insert_at_last(11);
    n.print();
    cout<<"\n";
    n.insert_at_beginning(13);
    n.insert_at_beginning(12);
    n.print();

}
