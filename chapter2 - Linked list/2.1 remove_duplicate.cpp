// Remove the duplicate elements from a linked-list.
// Input : 1 2 3 4 1 2 5 6 7
// Output : 1 2 3 4 5 6 7

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

    // The linked-list is traversed from head till the current node
    // If a duplicate is found the current is deleted, thus removing all duplicates
    void remove_duplicate()
    {
      if(head == NULL)
        return;
      node *previous, *current;
      previous = head;
      current = previous -> next;
      while(current != NULL)
      {
        node *iterator = head; // iterator is used to traverse the list from head till the current node.
        while(iterator != current)
        {
          // if duplicate is found
          if(iterator -> data == current -> data)
          {
            previous -> next = current -> next;
            current = previous -> next;
            break;
          }
          iterator = iterator -> next;
        }
        // moving the current and previous forward
        if(iterator == current)
        {
          previous = current;
          current = current -> next;
        }
      }
      return;
    }
};

int main()
{
  linked_list list;
  int n,element;
  cout << "Enter the number of nodes ";
  cin >> n;
  cout << "Enter the elements \n";
  for(int i = 0; i < n; i++)
  {
    cin >> element;
    list.add_node(element);
  }
  cout << "Original list\n";
  list.display();

  list.remove_duplicate();
  cout << "Updated List\n";
  list.display();
  return 0;
}
