// #include<bits/stdc++.h>
// using namespace std;
// // Naive approach considering rear as always size and front as always 0
// struct Queue
// {
//     int size,cap;
//     int *arr;
//     Queue(int c)
//     {
//         cap = c;
//         size = 0;
//         arr = new int[cap];
//     }
//     bool isfull()
//     {
//         return(size==cap);
//     }
//     bool isempty()
//     {
//         return(size==0);
//     }
//     void enqueue(int x)
//     {
//         if(isfull) return;
//         arr[size] = x;
//         size++;
//     }   
//     void dequeue()
//     {
//         if(isempty()) return;
//         for(int i = 0; i < size-1; i++)
//         {
//             arr[i] = arr[i+1];
//         }   
//         size--;
//     }
//     int getfront()
//     {
//         if(isempty()) return -1;
//         else
//         {
//             return(0);
//         }
//     }
//     int getrear()
//     {
//         if(isempty()) return -1;
//         else
//         {
//             return size-1;
//         }
//     }

// };
#include <bits/stdc++.h> 
using namespace std; 

 
class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

 
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	 
	queue->rear = capacity - 1; 
	queue->array = new int[( 
		queue->capacity * sizeof(int))]; 
	return queue; 
} 

 
int isFull(Queue* queue) 
{ 
	return (queue->size == queue->capacity); 
} 


int isEmpty(Queue* queue) 
{ 
	return (queue->size == 0); 
} 


void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) 
				% queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) 
				% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 


int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

 
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

 
int main() 
{ 
	Queue* queue = createQueue(1000); 

	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	cout << dequeue(queue) 
		<< " dequeued from queue\n"; 

	cout << "Front item is "
		<< front(queue) << endl; 
	cout << "Rear item is "
		<< rear(queue) << endl; 

	return 0; 
} 


