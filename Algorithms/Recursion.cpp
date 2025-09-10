//  #include <iostream>
// using namespace std;

// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int i = 0; i < n2; i++)
//         R[i] = arr[mid + 1 + i];

//     int i = 0, j = 0, k = left;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, arr_size - 1);

//     for (int i = 0; i < arr_size; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x) : data(x), left(nullptr), right(nullptr) {}
// };

// void inOrder(Node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }

// void preOrder(Node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void postOrder(Node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     Node* root = new Node(10);
//     root->left = new Node(11);
//     root->left->left = new Node(7);
//     root->right = new Node(9);
//     root->right->left = new Node(15);
//     root->right->right = new Node(8);

//     cout << "In-Order Traversal: ";
//     inOrder(root);
//     cout << endl;

//     cout << "Pre-Order Traversal: ";
//     preOrder(root);
//     cout << endl;

//     cout << "Post-Order Traversal: ";
//     postOrder(root);
//     cout << endl;

//     return 0;
// }



// You are using GCC
// #include <stdio.h>

// #define MAX 100

// int heap[MAX];
// int heapSize = 0;

// // Function to insert an element into the heap
// void insert(int value) {
//     if (heapSize >= MAX) {
//         printf("Heap is full\n");
//         return;
//     }
     
//     heap[heapSize] = value;
//     int current = heapSize;
//     heapSize++;
     
//     while (current > 0 && heap[(current - 1) / 2] < heap[current]) {
      
//         int temp = heap[(current - 1) / 2];
//         heap[(current - 1) / 2] = heap[current];
//         heap[current] = temp;
         
//         current = (current - 1) / 2;
//     }
// }
 
// int deleteMax() {
//     if (heapSize <= 0) {
//         printf("Heap is empty\n");
//         return -1;
//     }
    
//     int max = heap[0];
//     heap[0] = heap[heapSize - 1];
//     heapSize--;
    
//     int current = 0;
    
//     while (current * 2 + 1 < heapSize) {
//         int left = current * 2 + 1;
//         int right = current * 2 + 2;
//         int maxChild = left;
        
//         if (right < heapSize && heap[right] > heap[left]) {
//             maxChild = right;
//         }
        
//         if (heap[current] >= heap[maxChild]) {
//             break;
//         }
        
//         int temp = heap[current];
//         heap[current] = heap[maxChild];
//         heap[maxChild] = temp;
        
//         current = maxChild;
//     }
    
//     return max;
// }

// void displayHeap() {
//     for (int i = 0; i < heapSize; i++) {
//         printf("%d ", heap[i]);
//     }
//     printf("\n");
// }

// int main() {
//     insert(3);
//     insert(5);
//     insert(9);
//     insert(6);
//     insert(8);
//     insert(20);
//     insert(10);
//     insert(12);
//     insert(18);
//     insert(9);
    
//     displayHeap();

//     return 0;
// }

//FACTORIAL
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if (n == 0 || n == 1) return 1;
//     return (n)* fact(n-1); 
    
// }
// int main (){
//     int n = 5;
//     cout << fact(n);
//     return 0;
// }