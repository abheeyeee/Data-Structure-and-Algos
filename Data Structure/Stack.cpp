// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100

// struct Stack
// {
//     int top;
//     int arr[MAX];
// };
// void initStack(struct Stack* stack)
// {
//     stack->top=-1;
// }
// int isEmpty(struct Stack* stack){
//     return stack->top=-1;
// }

// int isFull(struct Stack* stack){
//     return stack->top==MAX-1;
// }

// void push(struct Stack* stack , int value){
//     if(isFull(stack))
//     {
//         printf("cannot insert a new element as stack is full");
//         return;
//     }
//     printf("element is inserted in the stack %d\n" , value);
//     stack->arr[++stack->top]=value;
// }
// int pop(struct Stack* stack)

// {
//     if(isEmpty(stack))
//     {
//         printf("cannot delete any element as stack is empty");
//         return -1;
//     }
    
//     return stack->arr[stack->top--];
// }

// int main (){
//     struct Stack stack;
//     initStack(&stack);
//     push(&stack,10);
//     push(&stack,20);
//     push(&stack,30);
//     push(&stack,40);
//     printf("element deleted is %d\n", pop(&stack));
//     return 0;
// }
 
//  #include <bits/stdc++.h>
//  using namespace std;
//   struct Node{
//     int data;
//     struct Node* next;
//   };
//   struct Stack
//   {
//     struct Node* top;
//   };
//   struct Node* createNode(int value)
//   {
//     struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
//     node1->data=value;
//     node1->next=NULL;
//     return node1;
//   }
//   struct Stack* createStack()
//   {
//     struct Stack* stack= (struct  Stack*)malloc(sizeof(struct Stack));
//     stack->top=NULL;
//     return stack;
    
//   }
//   int isEmpty(struct Stack* stack)
//   {
//     return stack->top==NULL;
//   }

//   void push(struct Stack* stack, int value)
//   {
//     struct Node* node1=createNode(value);
//     node1->next=stack->top;
//     stack->top=node1;
//     printf("value inserted is in the node is %d\n", value);
//   }
//   int pop(struct Stack* stack)
//   {
//     struct Node* temp=stack->top;
//     int popped = temp->data;
//     stack->top=stack->top->next;
//     free(temp);
//     return popped;
//       }
//       int peek(struct Stack* stack) {
//     if (isEmpty(stack)) {
//         cout << "Stack is empty" << endl;
//         return -1;
//     }
//     return stack->top->data;
// }

//     void display(struct Stack* stack){
//         struct Node* temp = stack->top;
//         if (isEmpty(stack)) {
//             cout << "\n stack Is empty" << endl;
//             return;
//         }
//         cout << "Data in the stack are: ";
//         while (temp != NULL){
//             cout << temp->data << " ";
//             temp = temp->next;

//         }
//         cout << endl;
//     }

//   int main(){
//     struct Stack* stack=createStack();
//     push(stack,10);
//     push(stack,20);
//     push(stack,30);
//     push(stack,40);
//     push(stack,50);
//     cout<<"The value popped from stack is "<<pop(stack)<< endl;
//     display (stack);
//     cout << "The value at the top of the stack is " << peek(stack) << endl;

//     cout << "The value popped from stack is " << pop(stack) << endl;

//     display(stack);

//     return 0;
//   }


// #include <iostream>
// #include <cctype> // for isdigit
// #define MAX 100

// using namespace std;

// class Stack {
//     int top;
// public:
//     int arr[MAX];
    
//     Stack() {
//         top = -1;
//     }
    
//     void push(int x) {
//         if (top >= (MAX - 1)) {
//             cout << "Stack Overflow\n";
//         } else {
//             arr[++top] = x;
//             cout << x << " pushed into stack\n";
//         }
//     }
    
//     int pop() {
//         if (top < 0) {
//             cout << "Stack Underflow\n";
//             return 0;
//         } else {
//             return arr[top--];
//         }
//     }
    
//     int peek() {
//         if (top < 0) {
//             cout << "Stack is Empty\n";
//             return 0;
//         } else {
//             return arr[top];
//         }
//     }
    
//     bool isEmpty() {
//         return (top < 0);
//     }

//     int evaluatePostfix(const char* exp) {
//         for (int i = 0; exp[i]; i++) {
//             if (isdigit(exp[i])) {
//                 push(exp[i] - '0'); // Convert char to int
//             } else {
//                 int val1 = pop();
//                 int val2 = pop();
//                 switch (exp[i]) {
//                     case '+':
//                         push(val2 + val1);
//                         break;
//                     case '-':
//                         push(val2 - val1);
//                         break;
//                     case '*':
//                         push(val2 * val1);
//                         break;
//                     case '/':
//                         push(val2 / val1);
//                         break;
//                 }
//             }
//         }
        
//         return pop(); // Return the result
//     }
// };

// int main() {
//     Stack myStack;

//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);
//     myStack.push(40);

//     cout << "Top element is: " << myStack.peek() << endl;

//     cout << "Elements popped from stack: " << myStack.pop() << " " << myStack.pop() << endl;

//     if (myStack.isEmpty()) {
//         cout << "Stack is empty now\n";
//     } else {
//         cout << "Stack is not empty\n";
//     }

//     // Example postfix expression evaluation
//     const char* postfix = "231*+9-"; // (2 * 3 + 1) - 9
//     cout << "Postfix evaluation result: " << myStack.evaluatePostfix(postfix) << endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(9);
    st.push(4); 
    st.pop();
    st.push(7);
    st.push(3);
   
    cout<<"Top of stack "<< st.top()<<endl;
    // Display current size
    cout << "Stack size: " << st.size() << endl;
}

