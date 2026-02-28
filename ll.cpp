#include <iostream>
using namespace std;
class Node
{ // user definded data type
public:
    Node *next;
    int val;
    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};
class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAttail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAthead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtidx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "invalid" << endl;
            return;
        }
        else if (idx == 0)
        {
            insertAthead(val);
        }
        else if (idx == size)
        {
            insertAttail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;

            size++;
        }
    }
    void display()
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int getAtInx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "invalid idx";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 0; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deletAtHead()
    {
        if (size == 0)
            cout << "empty";
        head = head->next;
        size--;
    }
    void deletAttail()
    {
        if (size == 0)
            cout << "empty";
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deletAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "invalid";
        }
        else if (idx == 0)
        {
            deletAtHead();
        }
        else if (idx == size - 1)
        {
            deletAttail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertAttail(10);
    ll.insertAttail(20);
    ll.insertAttail(50);
    ll.insertAttail(40);
    ll.display();
    ll.insertAthead(90);
    ll.insertAthead(100);
    ll.insertAthead(69);
    ll.insertAthead(49);
    ll.display();
    ll.insertAtidx(3, 80);
    ll.display();
    cout << ll.getAtInx(3) << " ";
    ll.deletAtHead();
    ll.display();
    ll.deletAttail();
    ll.display();
    ll.deletAtIdx(3);
    ll.display();
}