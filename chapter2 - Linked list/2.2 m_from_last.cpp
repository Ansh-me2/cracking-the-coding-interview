// Find the mth element from the last in a singly linked List
// Input: array = "1 2 3 4 5 6", m = 2
// Output: 5
#include <iostream>

using namespace std;

struct node
{
  int data;
  node *next;
};

class linked_list
{
  private:
      node *head,*tail;

  public:

    linked_list()
    {
      head = NULL;
      tail = NULL;
    }

    void add_node(int n)
    {
      node *temp = new node;
      temp -> data = n;
      temp -> next = NULL;
      if(head == NULL){
        head = temp;
        tail = temp;
      }
      else{
        tail -> next = temp;
        tail = tail -> next;
      }
    }

    void display()
    {
      if(head == NULL)
        {
          cout << "\nEmpty list";
          return;
        }
      node *temp;
      temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp -> next;
      }
    }

    void m_from_last(int m)
    {
      if(head == NULL)
        return;

      // finding the length of the linked list
      node *iterator = head;
      int length = 0;
      while(iterator != NULL)
      {
        length++;
        iterator = iterator -> next;
      }

      if(m > length)
      {
        cout << endl << "m is larger than size of the linked list" << endl;
        return;
      }
      iterator = head;
      for(int i = 0; i < length - m; i++)
        iterator = iterator -> next;
      cout << "mth element from last is " << iterator -> data << endl;
      return;
    }
};
int main()
{
  linked_list list;
  int n,m,element;
  cout << "Enter the number of nodes ";
  cin >> n;
  cout << "Enter the elements \n";
  for(int i = 0; i < n; i++)
  {
    cin >> element;
    list.add_node(element);
  }

  cout <<"\nThe list is : ";
  list.display();

  cout << "\nEnter the mth position : ";
  cin >> m;
  list.m_from_last(m);
  return 0;
}
