// #include<bits/stdc++.h>
// #define MAX 100

// struct Queue
// {
//     int front;
//     int rear;
//     int arr[MAX];
// };

// void initQueue(struct Queue* queue)
// {
//     queue->front=-1;
//     queue->rear=-1;
// }

// int isFull(struct Queue* queue)
// {
//     return queue->rear==MAX-1;
// }
// int isEmpty(struct Queue* queue)
// {
//     return queue->front==-1;
// }
// void Enqueue(struct Queue* queue, int value)
// {
//     if(isFull(queue))
//     {
//         printf("cannot insert value as overflow");
//         return;
//     }
//     if(queue->front==-1)
//     {
//         queue->front=0;
//     }
//     printf("the value inserted is %d\n", value);
//     queue->arr[++queue->rear]=value;
// }
// int Dequeue(struct Queue* queue)
// {
//     if(isEmpty(queue))
//     {
//         printf("cannot delelete any element as queue is Empty");
//         return -1;
//     }
//     if(queue->front==queue->rear)
//     {
//         queue->front=queue->rear=-1;
//     }
//     return queue->arr[queue->front++];
// }
// int frontElement(struct Queue* queue)
// {
//     if (isEmpty(queue))
//     {
//         printf("Queue is empty\n");
//         return -1;
//     }
//     return queue->arr[queue->front];
// }
// void display(struct Queue* queue) {
     
//     printf("Queue elements are: ");
//     for (int i = queue->front; i <= queue->rear; i++) {
//         printf("%d ", queue->arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     struct Queue queue;
//     initQueue(&queue);
//     Enqueue(&queue,10);
//     Enqueue(&queue,20);
//     Enqueue(&queue,30);
//     Enqueue(&queue,40);
//     Enqueue(&queue,50);
//     display(&queue);
//     printf("Front element is %d\n", frontElement(&queue));
//     printf("%d", queue.front);
//     printf("%d", queue.rear);
//     return 0;
// }



// QUEUE USING LINKED LIST
// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node* next;
// };

// struct Queue
// {
//     struct Node* front;
//     struct Node* rear;
// };
// struct Node* createNode(int value)
// {
//     struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
//     node1->data=value;
//     node1->next=NULL;
//     return node1;
// }

// void initQueue()
// {
//     struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
//     queue->front=NULL;
//     queue->rear=NULL;
// }
// int isEmpty(struct Queue* queue)
// {
//     return queue->front==NULL;
// }
// void Enqueue(struct Queue* queue, int value)
// {
//     struct Node* node1= createNode(value);
//     if (queue->rear == NULL) {
//         queue->front = queue->rear = node1;
//         return;
//     }
//     queue->rear->next = node1;
//     queue->rear = node1;
// }
// int Dequeue(struct Queue* queue) {
//     struct Node* temp = queue->front;
//     int value = temp->data;
//     queue->front = queue->front->next;
//     if (queue->front == NULL) {
//         queue->rear = NULL;
//     }
//     free(temp);
//     return value;
// }
// void deleteQueue(struct Queue* queue) {
//     while (!isEmpty(queue)) {
//         Dequeue(queue);
//     }
// }
// void display(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         cout << "Queue is empty\n";
//         return;
//     }
//     struct Node* temp = queue->front;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main() {
//     struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//     initQueue();

//     Enqueue(queue, 10);
//     Enqueue(queue, 20);
//     Enqueue(queue, 30);

//     cout << "Queue after enqueuing:  ";
//     display(queue);
//     cout << "Dequeued element: " << Dequeue(queue) << endl;


//     cout << "Dequeued element: " << Dequeue(queue) << endl;

//     cout << "Queue after dequeuing an element: ";
//     display(queue);

//     deleteQueue(queue);
//     free(queue);

//     return 0;
// }


// Priority Queue


// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// #define MAX 100

// struct PriorityQueue {
//     int arr[MAX];
//     int priority[MAX];
//     int size;
// };

// void initQueue(struct PriorityQueue* pq) {
//     pq->size = 0;
// }

// int isEmpty(struct PriorityQueue* pq) {
//     return pq->size == 0;
// }

// int isFull(struct PriorityQueue* pq) {
//     return pq->size == MAX;
// }

// void Enqueue(struct PriorityQueue* pq, int value, int priority) {
//     if (isFull(pq)) {
//         printf("Priority Queue is full\n");
//         return;
//     }
//     pq->arr[pq->size] = value;
//     pq->priority[pq->size] = priority;
//     pq->size++;
// }

// int getHighestPriorityIndex(struct PriorityQueue* pq) {
//     int maxPriority = INT_MIN;
//     int index = -1;
//     for (int i = 0; i < pq->size; i++) {
//         if (pq->priority[i] > maxPriority) {
//             maxPriority = pq->priority[i];
//             index = i;
//         }
//     }
//     return index;
// }

// int dequeue(struct PriorityQueue* pq) {
//     if (isEmpty(pq)) {
//         printf("Priority Queue is empty\n");
//         return -1;
//     }

//     int index = getHighestPriorityIndex(pq);
//     int value = pq->arr[index];

//     for (int i = index; i < pq->size - 1; i++) {
//         pq->arr[i] = pq->arr[i + 1];
//         pq->priority[i] = pq->priority[i + 1];
//     }

//     pq->size--;
//     return value;
// }

// int main() {
//     struct PriorityQueue pq;
//     initQueue(&pq);

//     Enqueue(&pq, 10, 1);
//     Enqueue(&pq, 20, 2);
//     Enqueue(&pq, 30, 3);

//     printf("Dequeued: %d\n", dequeue(&pq));
//     printf("Dequeued: %d\n", dequeue(&pq));
//     printf("Dequeued: %d\n", dequeue(&pq));

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Dequeue {
//     struct Node* front;
//     struct Node* rear;
    
// };

// struct Node* createNode(int data){
//     struct Node* newNode = (struct Node*)malloc(sizeof (struct Node));
//     newNode->data=data;
//     newNode->next=NULL;
//     return newNode;
// }
// struct Dequeue* createDequeue(){
//     struct Dequeue* dq=(struct Dequeue*)malloc(sizeof(struct Dequeue));
//     dq->front=dq->rear=NULL;
//     return dq;
// }
// int isEmpty(struct Dequeue* dq){
//     return(dq->front == NULL);
// }
// void insertFront(struct Dequeue dq, int data)
// {
//     struct Node* newNode = createNode(data);
// }
// int main(){
    
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);      // Enqueue 2

    cout << "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;

    q.pop(); // Dequeue

    cout << "Front after pop: " << q.front() << endl;
    // Display current size
    cout << "Queue size: " << q.size() << endl;
    return 0;
}