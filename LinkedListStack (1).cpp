/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C++ program for the above approach
#include <iostream>
using namespace std;


class Node
{
public:
  int data;
  Node *next;

  // Default constructor
    Node ()
  {
    data = 0;
    next = NULL;
  }

  // Parameterised Constructor
  Node (int data)
  {
    this->data = data;
    this->next = NULL;
  }
};


class LinkedlistStack
{
  Node *top;

public:
  // Default constructor
    LinkedlistStack ()
      {
        top = NULL;
      }

  void push (int data)
  {
    Node *temp = new Node (data);

    if (!temp)
      {
	    cout << "\nStack Overflow";
      }


    temp->next = top;

    // Make temp as top of Stack
    top = temp;
  }

  int isEmpty ()
  {
    return top == NULL;
  }

  int peek ()
  {
    if (!isEmpty ())
      return top->data;
    else
      return -1;
  }

  void pop ()
  {
    Node *temp;

    // Check for stack underflow
    if (top == NULL)
      {
	    cout << "\nStack Underflow" << endl;
      }
    else
      {

	    temp = top;
    	// Assign second node to top
    	top = top->next;
    
    	delete temp;
      }
  }
  void display ()
  {
    Node *temp;

    // Check for stack underflow
    if (top == NULL)
      {
	    cout << "\nStack Underflow";
      }
    else
      {
    	temp = top;
    	while (temp != NULL)
    	  {
    
    	    // Print node data
    	    cout << temp->data << " , ";
    
    	    // Assign temp link to temp
    	    temp = temp->next;
    	  }
      }
  }

};



// Driver Code
int
main ()
{
  LinkedlistStack stack;

  // Inserting nodes
  stack.push (12);
  stack.push (15);
  stack.push (9);
  stack.push (18);
  stack.push (4);
  cout << "Elements of the list are: ";

  // Print the list
  stack.display();
  cout << endl;
  
  cout << "\nTop element is "<< stack.peek() << endl;
  
  stack.pop();
  
  cout << "Elements of the list are: ";
  stack.display();
  cout << endl;
  
  return 0;
}
