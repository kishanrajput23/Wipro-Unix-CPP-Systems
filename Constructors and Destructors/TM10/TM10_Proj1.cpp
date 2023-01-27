#include <iostream>
using namespace std;

#define SIZE 10

class queue
{
	int *arr;	
	int capacity;	
	int front;		
	int rear;	
	int count;	

public:
	queue(int size = SIZE);	
	~queue();					
	void remove();
	void add(int x);
	int getfront();
	int size();
	int isEmpty();
	int isFull();
};

queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

queue::~queue()
{
	delete arr;
}

void queue::remove()
{
	if (isEmpty())
	{
		cout << "Queue is empty!!\n";
	}
	else
	{
	cout <<arr[front]<< '\n';
	front = (front + 1) % capacity;
	count--;
	}
}

void queue::add(int item)
{
	if (isFull())
	{
		cout << "Queue is full\n";
	}
	else
	{
	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
	}
}

int queue::getfront()
{
	if (isEmpty())
	{
		cout << "Queue is emplty!\n";
	}
	return arr[front];
}

int queue::size()
{
	return count;
}

int queue::isEmpty()
{
	if(size() == 0)
	return 1;
	return 0;
}

int queue::isFull()
{
	if(size() == capacity)
	return 1;
	return 0;
}

int main()
{
	queue q;
	q.add(5);
	q.add(10);
	q.add(15);
	q.remove();
	q.remove();
	q.add(30);
	q.add(37);
	q.remove();
	q.remove();
	q.remove();
	q.remove();
	q.add(45);
	q.remove();
	q.remove();
	return 0;
}
