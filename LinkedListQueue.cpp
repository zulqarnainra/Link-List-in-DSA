#include <bits/stdc++.h>
using namespace std;

class QNode {
	public:
	int data;
	QNode* next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue {
    public:
	QNode *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

	
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		
		rear->next = temp;
		rear = temp;
		
		delete temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

        cout<<temp->data <<" is dequeued from Queue"<<endl;
		delete temp;
	}
};

// Driven Program
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << (q.front)->data << endl;
	cout << "Queue Rear : " << (q.rear)->data;
}
// This code is contributed by rathbhupendra
