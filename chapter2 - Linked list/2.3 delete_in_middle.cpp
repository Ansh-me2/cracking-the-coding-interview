// Delete the element int the middle of a single linked list, given only access to that node
// NOTE : last node cannot be deleted as access is provided to only a specific node.
// Input: array = "1 2 3 4 5 6", node_to_delete = 4
// Output: 1 2 3 5 6

#include <iostream>
#include <stdlib.h>

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
      cout << endl;
    }

    node* address_finder(int element) //to provide access to the node
    {
      if(head == NULL)
      {
        cout << "\nEmpty list, exiting program";
        exit(-1);
      }
      node *iterator = head;
      while(iterator != NULL)
      {
        if(iterator -> data == element)
        {
          return iterator;
        }
        iterator = iterator -> next;
      }
      cout << "Element not found in the list, exiting program";
      exit(-1);
    }

    void delete_element(node* n) //function for the question mentioned
    {
      if(n == NULL || n -> next == NULL)
        return;

      node *next;
      next = n -> next;
      n -> data = next -> data;
      n -> next = next -> next;
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
  cout << "Current list : ";
  list.display();

  //providing access to a specific node.
  node* ele;
  cout << "\nEnter the element that has to be deleted : ";
  cin >> element;
  ele = list.address_finder(element);

  list.delete_element(ele);
  cout <<"\nThe new list is : ";
  list.display();

  return 0;
}
