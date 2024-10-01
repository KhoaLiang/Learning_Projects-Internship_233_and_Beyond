//exercise 1
// Implement methods add, size in template class SLinkedList (which implements List ADT) representing the singly linked list with type T with the initialized frame. The description of each method is given in the code.

// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList();
//     ~SLinkedList();
//     void    add(T e);
//     void    add(int index, T e);
//     int     size();
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = 0;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };
// For example:

// Test	Result
// SLinkedList<int> list;
// int size = 10;

// for(int index = 0; index < size; index++){
//     list.add(index);
// }

// cout << list.toString();
// [0,1,2,3,4,5,6,7,8,9]
// SLinkedList<int> list;
// int size = 10;

// for(int index = 0; index < size; index++){
//     list.add(0, index);
// }

// cout << list.toString();
// [9,8,7,6,5,4,3,2,1,0]

// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// // Template class for singly linked list
// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList();
//     ~SLinkedList();
//     void add(T e);
//     void add(int index, T e);
//     int size();
//     string toString() const;
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = nullptr;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };

// // Constructor
// template <class T>
// SLinkedList<T>::SLinkedList() {
//     // Initialize head to nullptr
//     this->head = nullptr;
//     // Initialize tail to nullptr
//     this->tail = nullptr;
//     // Initialize count to 0
//     count = 0;
// }

// // Destructor
// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList()
// {
//     Node *current = head; // Initialize a pointer to the head node
//     while (current != nullptr)
//     {                                   // While the current node is not nullptr
//         Node *nextNode = current->next; // Store the next node
//         delete current;                 // Delete the current node
//         current = nextNode;             // Move to the next node
//     }
//     head = nullptr; // Optional: Set head to nullptr to avoid dangling pointer
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(T e) {
//     // Create a new node with the given element
//     Node *newNode = new Node(e, nullptr);
//     // If the list is empty (head is nullptr)
//         // Set head and tail to the new node
//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     // Else
//         // Set the next of tail to the new node
//         // Update tail to the new node
//     else{
//         tail->next = newNode;
//         tail = newNode;
//     }
//     // Increment the count
//     count++;
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }

//     // Create a new node with the given element
//     // If the index is 0
//         // Set the next of the new node to head
//         // Update head to the new node
//         // If the list was empty, update tail to the new node
//     // Else
//         // Initialize a pointer to the head node
//         // Iterate to the node just before the given index
//         // Set the next of the new node to the next of the current node
//         // Set the next of the current node to the new node
//         // If the new node is added at the end, update tail to the new node
//     // Increment the count
//     Node *newNode = new Node(e, nullptr);
//     if (index == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         if (count == 0)
//         {
//             tail = newNode;
//         }
//     }
//     else{
//         Node *current = head;
//         for (int i = 0; i < index - 1; ++i)
//         {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//         // If the new node is added at the end, update tail to the new node
//         if (newNode->next == nullptr)
//         {
//             tail = newNode;
//         }
//     }
//     count++;
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size() {
//     // Return the count of nodes in the list
//     return count;
// }

// // Method to convert list to string (for testing purposes)
// template <class T>
// string SLinkedList<T>::toString() const {
//     stringstream ss;
//     ss << "[";
//     Node* current = head;
//     while (current != nullptr) {
//         ss << current->data;
//         if (current->next != nullptr) {
//             ss << ",";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// int main() {
//     // Test cases
//     SLinkedList<int> list1;
//     int size1 = 10;

//     for (int index = 0; index < size1; index++) {
//         list1.add(index);
//     }

//     cout << list1.toString() << endl; // Expected: [0,1,2,3,4,5,6,7,8,9]

//     SLinkedList<int> list2;
//     int size2 = 10;

//     for (int index = 0; index < size2; index++) {
//         list2.add(0, index);
//     }

//     cout << list2.toString() << endl; // Expected: [9,8,7,6,5,4,3,2,1,0]

//     return 0;
// }

//exercise 2
// Implement methods get, set, empty, indexOf, contains in template class SLinkedList (which implements List ADT) representing the singly linked list with type T with the initialized frame. The description of each method is given in the code.

// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList(): head(NULL), tail(NULL), count(0);
//     ~SLinkedList() { };
//     void    add(T e);
//     void    add(int index, T e);
//     int     size();
//     bool    empty();
//     T       get(int index);
//     void    set(int index, T e);
//     int     indexOf(T item);
//     bool    contains(T item);
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = 0;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next = NULL) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };
 

 

 

 

// For example:

// Test	Result
// SLinkedList<int> list;
// int values[]   = {10, 15, 2,  6,  4,  7,  40,  8};
// int index[]    = {0,  0,  1,  3,  2,  3,  5,   0};
// int expvalues[]= {8,  15, 2,  4,  7, 10,  40,  6}; 

// for (int idx = 0; idx < 8; idx++){
//    list.add(index[idx], values[idx]);
// }

// assert( list.size() == 8 );
        
// for (int idx = 0; idx < 8; idx++){
//     assert( list.get(idx) == expvalues[idx] );
// }

// cout << list.toString();
// [8,15,2,4,7,10,40,6]
// SLinkedList<int> list;

// assert( list.empty() == true );
// cout << list.toString();
// []

// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// // Template class for singly linked list
// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList();
//     ~SLinkedList();
//     void add(T e);
//     void add(int index, T e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, T e);
//     int indexOf(T item);
//     bool contains(T item);
//     string toString() const;
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = nullptr;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };

// // Constructor
// template <class T>
// SLinkedList<T>::SLinkedList() {
//     // Initialize head to nullptr
//     this->head = nullptr;
//     // Initialize tail to nullptr
//     this->tail = nullptr;
//     // Initialize count to 0
//     count = 0;
// }

// // Destructor
// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList()
// {
//     Node *current = head; // Initialize a pointer to the head node
//     while (current != nullptr)
//     {                                   // While the current node is not nullptr
//         Node *nextNode = current->next; // Store the next node
//         delete current;                 // Delete the current node
//         current = nextNode;             // Move to the next node
//     }
//     head = nullptr; // Optional: Set head to nullptr to avoid dangling pointer
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(T e) {
//     // Create a new node with the given element
//     Node *newNode = new Node(e, nullptr);
//     // If the list is empty (head is nullptr)
//         // Set head and tail to the new node
//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     // Else
//         // Set the next of tail to the new node
//         // Update tail to the new node
//     else{
//         tail->next = newNode;
//         tail = newNode;
//     }
//     // Increment the count
//     count++;
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }

//     // Create a new node with the given element
//     // If the index is 0
//         // Set the next of the new node to head
//         // Update head to the new node
//         // If the list was empty, update tail to the new node
//     // Else
//         // Initialize a pointer to the head node
//         // Iterate to the node just before the given index
//         // Set the next of the new node to the next of the current node
//         // Set the next of the current node to the new node
//         // If the new node is added at the end, update tail to the new node
//     // Increment the count
//     Node *newNode = new Node(e, nullptr);
//     if (index == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         if (count == 0)
//         {
//             tail = newNode;
//         }
//     }
//     else{
//         Node *current = head;
//         for (int i = 0; i < index - 1; ++i)
//         {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//         // If the new node is added at the end, update tail to the new node
//         if (newNode->next == nullptr)
//         {
//             tail = newNode;
//         }
//     }
//     count++;
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size() {
//     // Return the count of nodes in the list
//     return count;
// }

// // Check if the list is empty
// template<class T>
// bool SLinkedList<T>::empty() {
//     // Return true if count is 0, otherwise false
//     if (count == 0)
//     {
//         return true;
//     }
//     return false;
// }

// // Get the element at a specific index
// template<class T>
// T SLinkedList<T>::get(int index) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Iterate to the node at the given index
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     // Return the data of the node
//     return current->data;
// }

// // Set the element at a specific index
// template <class T>
// void SLinkedList<T>::set(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Iterate to the node at the given index
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     // Set the data of the node to the given element
//     current->data = e;
// }

// // Return the first index where the item appears in the list
// template<class T>
// int SLinkedList<T>::indexOf(T item) {
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Initialize an index counter to 0
//     int index = 0;
//     // While the current node is not nullptr
//         // If the data of the current node equals the item
//             // Return the index counter
//         // Move to the next node
//         // Increment the index counter
//     // Return -1 if the item is not found
//     while(current != nullptr){
//         if (current->data == item)
//         {
//             return index;
//         }
//         current = current->next;
//         index++;
//     }
//     return -1;
// }

// // Check if the item appears in the list
// template<class T>
// bool SLinkedList<T>::contains(T item) {
//     // Return true if indexOf(item) is not -1, otherwise false
//     if (indexOf(item) != -1)
//     {
//         return true;
//     }
//     return false;
// }

// // Method to convert list to string (for testing purposes)
// template <class T>
// string SLinkedList<T>::toString() const {
//     stringstream ss;
//     ss << "[";
//     Node* current = head;
//     while (current != nullptr) {
//         ss << current->data;
//         if (current->next != nullptr) {
//             ss << ",";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// int main()
// {
//     // Test cases for exercise 2
//     SLinkedList<int> list3;
//     int values[] = {10, 15, 2, 6, 4, 7, 40, 8};
//     int index[] = {0, 0, 1, 3, 2, 3, 5, 0};
//     int expvalues[] = {8, 15, 2, 4, 7, 10, 40, 6};

//     for (int idx = 0; idx < 8; idx++)
//     {
//         list3.add(index[idx], values[idx]);
//     }

//     cout << "List after adding elements: " << list3.toString() << endl; // Expected: [8,15,2,4,7,10,40,6]

//     // Test get method
//     cout << "Get element at index 0: " << list3.get(0) << " (Expected: 8)" << endl;
//     cout << "Get element at index 3: " << list3.get(3) << " (Expected: 4)" << endl;

//     // Test set method
//     list3.set(0, 100);
//     cout << "List after setting element at index 0 to 100: " << list3.toString() << " (Expected: [100,15,2,4,7,10,40,6])" << endl;
//     list3.set(3, 200);
//     cout << "List after setting element at index 3 to 200: " << list3.toString() << " (Expected: [100,15,2,200,7,10,40,6])" << endl;

//     // Test indexOf method
//     cout << "Index of element 100: " << list3.indexOf(100) << " (Expected: 0)" << endl;
//     cout << "Index of element 200: " << list3.indexOf(200) << " (Expected: 3)" << endl;
//     cout << "Index of element 7: " << list3.indexOf(7) << " (Expected: 4)" << endl;
//     cout << "Index of element 999: " << list3.indexOf(999) << " (Expected: -1)" << endl;

//     // Test contains method
//     cout << "Contains element 100: " << (list3.contains(100) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 200: " << (list3.contains(200) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 7: " << (list3.contains(7) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 999: " << (list3.contains(999) ? "true" : "false") << " (Expected: false)" << endl;

//     return 0;
// }
//exercise 3
// Implement methods removeAt, removeItem, clear in template class SLinkedList (which implements List ADT) representing the singly linked list with type T with the initialized frame. The description of each method is given in the code.

// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList();
//     ~SLinkedList();
//     void    add(T e);
//     void    add(int index, T e);
//     int     size();
//     bool    empty();
//     int     size();
//     void    clear();
//     T       get(int index);
//     void    set(int index, T e);
//     int     indexOf(T item);
//     bool    contains(T item);
//     T       removeAt(int index);
//     bool    removeItem(T item);
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = 0;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next = NULL) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };

// For example:

// Test	Result
// SLinkedList<int> list;

//     for (int i = 0; i < 10; ++i) {
//         list.add(i);
//     }
//     assert(list.get(0) == list.removeAt(0));

//     cout << list.toString();
// [1,2,3,4,5,6,7,8,9]
//     SLinkedList<int> list;

//     for (int i = 0; i < 10; ++i) {
//         list.add(i);
//     }
//     assert(list.get(9) == list.removeAt(9));

//     cout << list.toString();
// [0,1,2,3,4,5,6,7,8]
//     SLinkedList<int> list;

//     for (int i = 0; i < 10; ++i) {
//         list.add(i);
//     }
//     assert(list.removeItem(9));

//     cout << list.toString();
// [0,1,2,3,4,5,6,7,8]

// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// // Template class for singly linked list
// template <class T>
// class SLinkedList {
// public:
//     class Node; // Forward declaration
// protected:
//     Node* head;
//     Node* tail;
//     int count;
// public:
//     SLinkedList();
//     ~SLinkedList();
//     void add(T e);
//     void add(int index, T e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, T e);
//     int indexOf(T item);
//     bool contains(T item);
//     void clear();
//     T removeAt(int index);
//     bool removeItem(T item);
//     string toString() const;
// public:
//     class Node {
//     private:
//         T data;
//         Node* next;
//         friend class SLinkedList<T>;
//     public:
//         Node() {
//             next = nullptr;
//         }
//         Node(Node* next) {
//             this->next = next;
//         }
//         Node(T data, Node* next) {
//             this->data = data;
//             this->next = next;
//         }
//     };
// };

// // Constructor
// template <class T>
// SLinkedList<T>::SLinkedList() {
//     // Initialize head to nullptr
//     this->head = nullptr;
//     // Initialize tail to nullptr
//     this->tail = nullptr;
//     // Initialize count to 0
//     count = 0;
// }

// // Destructor
// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList()
// {
//     Node *current = head; // Initialize a pointer to the head node
//     while (current != nullptr)
//     {                                   // While the current node is not nullptr
//         Node *nextNode = current->next; // Store the next node
//         delete current;                 // Delete the current node
//         current = nextNode;             // Move to the next node
//     }
//     head = nullptr; // Optional: Set head to nullptr to avoid dangling pointer
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(T e) {
//     // Create a new node with the given element
//     Node *newNode = new Node(e, nullptr);
//     // If the list is empty (head is nullptr)
//         // Set head and tail to the new node
//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     // Else
//         // Set the next of tail to the new node
//         // Update tail to the new node
//     else{
//         tail->next = newNode;
//         tail = newNode;
//     }
//     // Increment the count
//     count++;
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }

//     // Create a new node with the given element
//     // If the index is 0
//         // Set the next of the new node to head
//         // Update head to the new node
//         // If the list was empty, update tail to the new node
//     // Else
//         // Initialize a pointer to the head node
//         // Iterate to the node just before the given index
//         // Set the next of the new node to the next of the current node
//         // Set the next of the current node to the new node
//         // If the new node is added at the end, update tail to the new node
//     // Increment the count
//     Node *newNode = new Node(e, nullptr);
//     if (index == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         if (count == 0)
//         {
//             tail = newNode;
//         }
//     }
//     else{
//         Node *current = head;
//         for (int i = 0; i < index - 1; ++i)
//         {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//         // If the new node is added at the end, update tail to the new node
//         if (newNode->next == nullptr)
//         {
//             tail = newNode;
//         }
//     }
//     count++;
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size() {
//     // Return the count of nodes in the list
//     return count;
// }

// // Check if the list is empty
// template<class T>
// bool SLinkedList<T>::empty() {
//     // Return true if count is 0, otherwise false
//     if (count == 0)
//     {
//         return true;
//     }
//     return false;
// }

// // Get the element at a specific index
// template<class T>
// T SLinkedList<T>::get(int index) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Iterate to the node at the given index
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     // Return the data of the node
//     return current->data;
// }

// // Set the element at a specific index
// template <class T>
// void SLinkedList<T>::set(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Iterate to the node at the given index
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     // Set the data of the node to the given element
//     current->data = e;
// }

// // Return the first index where the item appears in the list
// template<class T>
// int SLinkedList<T>::indexOf(T item) {
//     // Initialize a pointer to the head node
//     Node *current = head;
//     // Initialize an index counter to 0
//     int index = 0;
//     // While the current node is not nullptr
//         // If the data of the current node equals the item
//             // Return the index counter
//         // Move to the next node
//         // Increment the index counter
//     // Return -1 if the item is not found
//     while(current != nullptr){
//         if (current->data == item)
//         {
//             return index;
//         }
//         current = current->next;
//         index++;
//     }
//     return -1;
// }

// // Check if the item appears in the list
// template<class T>
// bool SLinkedList<T>::contains(T item) {
//     // Return true if indexOf(item) is not -1, otherwise false
//     if (indexOf(item) != -1)
//     {
//         return true;
//     }
//     return false;
// }

// // Remove element at index and return removed value
// // Remove the first appearance of item in list and return true, otherwise return false
// template <class T>
// bool SLinkedList<T>::removeItem(T item)
// {
//     Node *current = head;
//     Node *prev = nullptr;
//     while (current != nullptr)
//     {
//         if (current->data == item)
//         {
//             if (prev == nullptr)
//             {
//                 head = current->next;
//                 if (count == 1)
//                 {
//                     tail = nullptr;
//                 }
//             }
//             else
//             {
//                 prev->next = current->next;
//                 if (current->next == nullptr)
//                 {
//                     tail = prev;
//                 }
//             }
//             delete current;
//             count--;
//             return true;
//         }
//         prev = current;
//         current = current->next;
//     }
//     return false;
// }

// // Remove all elements in list
// template <class T>
// void SLinkedList<T>::clear()
// {
//     Node *current = head;
//     while (current != nullptr)
//     {
//         Node *nextNode = current->next;
//         delete current;
//         current = nextNode;
//     }
//     head = nullptr;
//     tail = nullptr;
//     count = 0;
// }

// // Convert the list to a string representation
// template <class T>
// string SLinkedList<T>::toString() const
// {
//     stringstream ss;
//     ss << "[";
//     Node *current = head;
//     while (current != nullptr)
//     {
//         ss << current->data;
//         if (current->next != nullptr)
//         {
//             ss << ",";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// int main()
// {
//     // Test cases for exercise 2
//     SLinkedList<int> list3;
//     int values[] = {10, 15, 2, 6, 4, 7, 40, 8};
//     int index[] = {0, 0, 1, 3, 2, 3, 5, 0};
//     int expvalues[] = {8, 15, 2, 4, 7, 10, 40, 6};

//     for (int idx = 0; idx < 8; idx++)
//     {
//         list3.add(index[idx], values[idx]);
//     }

//     cout << "List after adding elements: " << list3.toString() << endl; // Expected: [8,15,2,4,7,10,40,6]

//     // Test get method
//     cout << "Get element at index 0: " << list3.get(0) << " (Expected: 8)" << endl;
//     cout << "Get element at index 3: " << list3.get(3) << " (Expected: 4)" << endl;

//     // Test set method
//     list3.set(0, 100);
//     cout << "List after setting element at index 0 to 100: " << list3.toString() << " (Expected: [100,15,2,4,7,10,40,6])" << endl;
//     list3.set(3, 200);
//     cout << "List after setting element at index 3 to 200: " << list3.toString() << " (Expected: [100,15,2,200,7,10,40,6])" << endl;

//     // Test indexOf method
//     cout << "Index of element 100: " << list3.indexOf(100) << " (Expected: 0)" << endl;
//     cout << "Index of element 200: " << list3.indexOf(200) << " (Expected: 3)" << endl;
//     cout << "Index of element 7: " << list3.indexOf(7) << " (Expected: 4)" << endl;
//     cout << "Index of element 999: " << list3.indexOf(999) << " (Expected: -1)" << endl;

//     // Test contains method
//     cout << "Contains element 100: " << (list3.contains(100) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 200: " << (list3.contains(200) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 7: " << (list3.contains(7) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "Contains element 999: " << (list3.contains(999) ? "true" : "false") << " (Expected: false)" << endl;

//     // Test removeItem method
//     cout << "Remove item 200: " << (list3.removeItem(200) ? "true" : "false") << " (Expected: true)" << endl;
//     cout << "List after removing item 200: " << list3.toString() << " (Expected: [15,2,10,40,6])" << endl;
//     cout << "Remove item 999: " << (list3.removeItem(999) ? "true" : "false") << " (Expected: false)" << endl;
//     cout << "List after attempting to remove item 999: " << list3.toString() << " (Expected: [15,2,10,40,6])" << endl;

//     // Test clear method
//     list3.clear();
//     cout << "List after clearing: " << list3.toString() << " (Expected: [])" << endl;

//     return 0;
// }

//exercise 4
// Class LLNode representing a node of singly linked lists is declared as below:
// class LLNode {
// public:
//     int val;
//     LLNode* next;
//     LLNode(); // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode* next); // Constructor with customized data
// }
// Given a singly linked list head node.
// Your task is to implement a function with following prototype:
// LLNode* reverseLinkedList(LLNode* head);
// The function returns head node of the reversed singly linked list.

// Note:
// - The iostream library has been included and namespace std is being used. No other libraries are allowed.
// - The constructors and methods of class LLNode have been defined fully so you do not need to redefine them.
// - You can write helper functions.

// For example:

// Test	Result
// int arr[] = {13, 88, 60, 7, 192};
// LLNode* head = LLNode::createWithIterators(arr, arr + sizeof(arr) / sizeof(int));
// LLNode::printList(head);
// cout << "\n";
// LLNode* newhead = reverseLinkedList(head);
// LLNode::printList(newhead);
// newhead->clear();
// [13, 88, 60, 7, 192]
// [192, 7, 60, 88, 13]

// #include <iostream>

// using namespace std;

// // Class LLNode representing a node of singly linked lists
// class LLNode
// {
// public:
//     int val;
//     LLNode *next;

//     LLNode() : val(0), next(nullptr) {}                     // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode *next) : val(val), next(next) {} // Constructor with customized data

//     // Helper function to create a linked list from an array
//     static LLNode *createWithIterators(int *begin, int *end)
//     {
//         LLNode *head = nullptr;
//         LLNode *tail = nullptr;
//         for (int *it = begin; it != end; ++it)
//         {
//             LLNode *newNode = new LLNode(*it, nullptr);
//             if (!head)
//             {
//                 head = tail = newNode;
//             }
//             else
//             {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
//         return head;
//     }

//     // Helper function to print the linked list
//     static void printList(LLNode *head)
//     {
//         LLNode *current = head;
//         while (current)
//         {
//             cout << current->val;
//             if (current->next)
//             {
//                 cout << ", ";
//             }
//             current = current->next;
//         }
//         cout << endl;
//     }

//     // Helper function to clear the linked list
//     void clear()
//     {
//         LLNode *current = this;
//         while (current)
//         {
//             LLNode *next = current->next;
//             delete current;
//             current = next;
//         }
//     }
// };

// // Function to reverse the linked list
// LLNode *reverseLinkedList(LLNode *head)
// {
//     LLNode *prev = nullptr;
//     LLNode *current = head;
//     LLNode *next = nullptr;

//     while (current != nullptr)
//     {
//         next = current->next; // Store the next node
//         current->next = prev; // Reverse the current node's pointer
//         prev = current;       // Move prev one step forward
//         current = next;       // Move current one step forward
//     }

//     return prev; // prev will be the new head of the reversed list
// }

// int main()
// {
//     // Test case
//     int arr[] = {13, 88, 60, 7, 192};
//     LLNode *head = LLNode::createWithIterators(arr, arr + sizeof(arr) / sizeof(int));
//     LLNode::printList(head); // Expected: 13, 88, 60, 7, 192
//     cout << "\n";
//     LLNode *newhead = reverseLinkedList(head);
//     LLNode::printList(newhead); // Expected: 192, 7, 60, 88, 13
//     newhead->clear();

//     return 0;
// }

//excercise 5
// Implement Iterator class in class SLinkedList. 

// Note: Iterator is a concept of repetitive elements on sequence structures. Iterator is implemented in class vector, list in STL container in C++ (https://www.geeksforgeeks.org/iterators-c-stl/). Your task is to implement the simple same class with iterator in C++ STL container.

// Please read example and testcase carefully.

// template <class T>
// class SLinkedList
// {
// public:
//     class Iterator; //forward declaration
//     class Node;     //forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;
// public:
//     SLinkedList() : head(NULL), tail(NULL), count(0){};
//     ~SLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     T removeAt(int index);
//     bool removeItem(const T &removeItem);
//     bool empty();
//     int size();
//     void clear();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);
//     string toString();
//     SLinkedList(const SLinkedList &list)
//     {
//         this->count = 0;
//         this->head = NULL;
//         this->tail = NULL;
//     }
//     Iterator begin()
//     {
//         return Iterator(this, true);
//     }
//     Iterator end()
//     {
//         return Iterator(this, false);
//     }
// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         friend class SLinkedList<T>;
//     public:
//         Node()
//         {
//             next = 0;
//         }
//         Node(Node *next)
//         {
//             this->next = next;
//         }
//         Node(T data, Node *next = NULL)
//         {
//             this->data = data;
//             this->next = next;
//         }
//     };
//     class Iterator
//     {
//     private:
//         SLinkedList<T> *pList;
//         Node *current;
//         int index; // corresponding with current node
//     public:
//         Iterator(SLinkedList<T> *pList, bool begin);
//         Iterator &operator=(const Iterator &iterator);
//         void set(const T &e);
//         T &operator*();
//         bool operator!=(const Iterator &iterator);
        
//         // Prefix ++ overload
//         Iterator &operator++();
        
//         // Postfix ++ overload
//         Iterator operator++(int);
//     };
// };
// For example:

// Test	Result
// SLinkedList<int> list;
    
// int size = 10;
// for(int idx=0; idx < size; idx++){
//     list.add(idx);
// }
        
// SLinkedList<int>::Iterator it;
// int expvalue = 0;
// for(it = list.begin(); it != list.end(); it++){
//     assert(*it == expvalue);
//     expvalue += 1;
// }
// SLinkedList<int> list;
    
// int size = 10;
// for(int idx=0; idx < size; idx++){
//     list.add(idx);
// }
        
// SLinkedList<int>::Iterator it;
// int expvalue = 0;
// for(it = list.begin(); it != list.end(); ++it){
//     assert(*it == expvalue);
//     expvalue += 1;
// }

// #include <iostream>
// #include <string>
// #include <sstream>
// #include <stdexcept>

// using namespace std;

// template <class T>
// class SLinkedList
// {
// public:
//     class Iterator; // Forward declaration
//     class Node;     // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     SLinkedList() : head(NULL), tail(NULL), count(0) {};
//     ~SLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     T removeAt(int index);
//     bool removeItem(const T &removeItem);
//     bool empty();
//     int size();
//     void clear();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);
//     string toString();
//     SLinkedList(const SLinkedList &list)
//     {
//         this->count = 0;
//         this->head = NULL;
//         this->tail = NULL;
//     }
//     Iterator begin()
//     {
//         return Iterator(this, true);
//     }
//     Iterator end()
//     {
//         return Iterator(this, false);
//     }

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         friend class SLinkedList<T>;

//     public:
//         Node()
//         {
//             next = 0;
//         }
//         Node(Node *next)
//         {
//             this->next = next;
//         }
//         Node(T data, Node *next = NULL)
//         {
//             this->data = data;
//             this->next = next;
//         }
//     };
//     class Iterator
//     {
//     private:
//         SLinkedList<T> *pList;
//         Node *current;
//         int index; // corresponding with current node
//     public:
//         Iterator(SLinkedList<T> *pList, bool begin);
//         Iterator &operator=(const Iterator &iterator);
//         void set(const T &e);
//         T &operator*();
//         bool operator!=(const Iterator &iterator);

//         // Prefix ++ overload
//         Iterator &operator++();

//         // Postfix ++ overload
//         Iterator operator++(int);
//     };
// };

// // Constructor of iterator
// template <class T>
// SLinkedList<T>::Iterator::Iterator(SLinkedList<T> *pList, bool begin)
// {
//     this->pList = pList;
//     if (begin)
//     {
//         this->current = pList->head;
//         this->index = (pList->head != nullptr) ? 0 : -1;
//     }
//     else
//     {
//         this->current = nullptr;
//         this->index = (pList != nullptr) ? pList->size() : 0;
//     }
// }

// // Assignment operator
// template <class T>
// typename SLinkedList<T>::Iterator &SLinkedList<T>::Iterator::operator=(const Iterator &iterator)
// {
//     this->pList = iterator.pList;
//     this->current = iterator.current;
//     this->index = iterator.index;
//     return *this;
// }

// // Set the new value for current node
// template <class T>
// void SLinkedList<T>::Iterator::set(const T &e)
// {
//     if (current == nullptr)
//     {
//         throw out_of_range("Segmentation fault!");
//     }
//     current->data = e;
// }

// // Get data stored in current node
// template <class T>
// T &SLinkedList<T>::Iterator::operator*()
// {
//     if (current == nullptr)
//     {
//         throw out_of_range("Segmentation fault!");
//     }
//     return current->data;
// }

// // Operator not equals
// template <class T>
// bool SLinkedList<T>::Iterator::operator!=(const Iterator &iterator)
// {
//     return this->current != iterator.current || this->index != iterator.index;
// }

// // Prefix ++ overload
// template <class T>
// typename SLinkedList<T>::Iterator &SLinkedList<T>::Iterator::operator++()
// {
//     if (current == nullptr)
//     {
//         throw out_of_range("Segmentation fault!");
//     }
//     current = current->next;
//     index++;
//     return *this;
// }

// // Postfix ++ overload
// template <class T>
// typename SLinkedList<T>::Iterator SLinkedList<T>::Iterator::operator++(int)
// {
//     Iterator temp = *this;
//     ++(*this);
//     return temp;
// }

// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList()
// {
//     clear();
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(const T &e)
// {
//     Node *newNode = new Node(e, nullptr);
//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         tail = newNode;
//     }
//     count++;
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, const T &e)
// {
//     if (index < 0 || index > count)
//     {
//         throw out_of_range("Index out of range");
//     }

//     Node *newNode = new Node(e, nullptr);
//     if (index == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         if (count == 0)
//         {
//             tail = newNode;
//         }
//     }
//     else
//     {
//         Node *current = head;
//         for (int i = 0; i < index - 1; ++i)
//         {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//         if (newNode->next == nullptr)
//         {
//             tail = newNode;
//         }
//     }
//     count++;
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size()
// {
//     return count;
// }

// // Check if the list is empty
// template <class T>
// bool SLinkedList<T>::empty()
// {
//     return count == 0;
// }

// // Get the element at a specific index
// template <class T>
// T SLinkedList<T>::get(int index)
// {
//     if (index < 0 || index >= count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     Node *current = head;
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     return current->data;
// }

// // Set the element at a specific index
// template <class T>
// void SLinkedList<T>::set(int index, const T &e)
// {
//     if (index < 0 || index >= count)
//     {
//         throw out_of_range("Index out of range");
//     }
//     Node *current = head;
//     for (int i = 0; i < index; ++i)
//     {
//         current = current->next;
//     }
//     current->data = e;
// }

// // Return the first index where the item appears in the list
// template <class T>
// int SLinkedList<T>::indexOf(const T &item)
// {
//     Node *current = head;
//     int index = 0;
//     while (current != nullptr)
//     {
//         if (current->data == item)
//         {
//             return index;
//         }
//         current = current->next;
//         index++;
//     }
//     return -1;
// }

// // Check if the item appears in the list
// template <class T>
// bool SLinkedList<T>::contains(const T &item)
// {
//     return indexOf(item) != -1;
// }

// // Remove the element at a specific index
// template <class T>
// T SLinkedList<T>::removeAt(int index)
// {
//     if (index < 0 || index >= count)
//     {
//         throw out_of_range("Index out of range");
//     }

//     Node *current = head;
//     T data;
//     if (index == 0)
//     {
//         data = head->data;
//         head = head->next;
//         if (count == 1)
//         {
//             tail = nullptr;
//         }
//         delete current;
//     }
//     else
//     {
//         Node *prev = nullptr;
//         for (int i = 0; i < index; ++i)
//         {
//             prev = current;
//             current = current->next;
//         }
//         data = current->data;
//         prev->next = current->next;
//         if (current->next == nullptr)
//         {
//             tail = prev;
//         }
//         delete current;
//     }
//     count--;
//     return data;
// }

// // Remove the first appearance of item in list and return true, otherwise return false
// template <class T>
// bool SLinkedList<T>::removeItem(const T &item)
// {
//     Node *current = head;
//     Node *prev = nullptr;
//     while (current != nullptr)
//     {
//         if (current->data == item)
//         {
//             if (prev == nullptr)
//             {
//                 head = current->next;
//                 if (count == 1)
//                 {
//                     tail = nullptr;
//                 }
//             }
//             else
//             {
//                 prev->next = current->next;
//                 if (current->next == nullptr)
//                 {
//                     tail = prev;
//                 }
//             }
//             delete current;
//             count--;
//             return true;
//         }
//         prev = current;
//         current = current->next;
//     }
//     return false;
// }

// // Remove all elements in list
// template <class T>
// void SLinkedList<T>::clear()
// {
//     Node *current = head;
//     while (current != nullptr)
//     {
//         Node *nextNode = current->next;
//         delete current;
//         current = nextNode;
//     }
//     head = nullptr;
//     tail = nullptr;
//     count = 0;
// }

// // Convert the list to a string representation
// template <class T>
// string SLinkedList<T>::toString()
// {
//     stringstream ss;
//     ss << "[";
//     Node *current = head;
//     while (current != nullptr)
//     {
//         ss << current->data;
//         if (current->next != nullptr)
//         {
//             ss << ",";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// int main()
// {
//     // Test case for Iterator
//     SLinkedList<int> list;
//     int size = 10;
//     for (int idx = 0; idx < size; idx++)
//     {
//         list.add(idx);
//     }


//     cout << "Iterator tests passed!" << endl;

//     return 0;
// }

//exercise 6
// Class LLNode is used to store a node in a singly linked list, described on the following:

// class LLNode {
//     public:
//         int val;
//         LLNode* next;
//         LLNode();
//         LLNode(int val, LLNode* next);
// }
// Where val is the value of node, next is the pointer to the next node.

// Request: Implement function:

// LLNode* addLinkedList(LLNode* l0, LLNode* l1);
// Where l0, l1 are two linked lists represented positive integers, each node is a digit, the head is the least significant digit (the value of each node is between 0 and 9, the length of each linked list is between 0 and 100000). This function returns the linked list representing the sum of the two integers.

// Example:

// Given l0 = [2, 3] (representing 32) and l1 = [1, 8] (representing 81). The result would be l0 = [3, 1, 1] (representing 32 + 81 = 113).

// Note:

// In this exercise, the libraries iostream, string, cstring, climits, utility, vector, list, stack, queue, map, unordered_map, set, unordered_set, functional, algorithm has been included and namespace std are used. You can write helper functions and classes. Importing other libraries is allowed, but not encouraged, and may result in unexpected errors.

// For example:

// Test	Result
// int arr1[] = {2, 9};
// int arr2[] = {0, 5};
// LLNode* head1 = LLNode::createWithIterators(arr1, arr1 + sizeof(arr1) / sizeof(int));
// LLNode* head2 = LLNode::createWithIterators(arr2, arr2 + sizeof(arr2) / sizeof(int));
// LLNode* newhead = addLinkedList(head1, head2);
// LLNode::printList(newhead);
// head1->clear();
// head2->clear();
// newhead->clear();
// [2, 4, 1]

// #include <iostream>
// #include <vector>

// using namespace std;

// // Class LLNode representing a node of singly linked lists
// class LLNode
// {
// public:
//     int val;
//     LLNode *next;

//     LLNode() : val(0), next(nullptr) {}                     // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode *next) : val(val), next(next) {} // Constructor with customized data

//     // Helper function to create a linked list from an array
//     static LLNode *createWithIterators(int *begin, int *end)
//     {
//         LLNode *head = nullptr;
//         LLNode *tail = nullptr;
//         for (int *it = begin; it != end; ++it)
//         {
//             LLNode *newNode = new LLNode(*it, nullptr);
//             if (!head)
//             {
//                 head = tail = newNode;
//             }
//             else
//             {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
//         return head;
//     }

//     // Helper function to print the linked list
//     static void printList(LLNode *head)
//     {
//         LLNode *current = head;
//         while (current)
//         {
//             cout << current->val;
//             if (current->next)
//             {
//                 cout << ", ";
//             }
//             current = current->next;
//         }
//         cout << endl;
//     }

//     // Helper function to clear the linked list
//     void clear()
//     {
//         LLNode *current = this;
//         while (current)
//         {
//             LLNode *next = current->next;
//             delete current;
//             current = next;
//         }
//     }
// };

// // Function to add two linked lists representing positive integers
// LLNode *addLinkedList(LLNode *l0, LLNode *l1)
// {
//     LLNode dummy(0, nullptr);
//     LLNode *current = &dummy;
//     int carry = 0;

//     while (l0 != nullptr || l1 != nullptr || carry != 0)
//     {
//         int sum = carry;
//         if (l0 != nullptr)
//         {
//             sum += l0->val;
//             l0 = l0->next;
//         }
//         if (l1 != nullptr)
//         {
//             sum += l1->val;
//             l1 = l1->next;
//         }
//         carry = sum / 10;
//         current->next = new LLNode(sum % 10, nullptr);
//         current = current->next;
//     }

//     return dummy.next;
// }

// int main()
// {
//     // Test case for addLinkedList
//     int arr1[] = {2, 3}; // Represents 32
//     int arr2[] = {1, 8}; // Represents 81
//     LLNode *head1 = LLNode::createWithIterators(arr1, arr1 + sizeof(arr1) / sizeof(int));
//     LLNode *head2 = LLNode::createWithIterators(arr2, arr2 + sizeof(arr2) / sizeof(int));
//     LLNode *newhead = addLinkedList(head1, head2);
//     LLNode::printList(newhead); // Expected: 3, 1, 1 (Represents 113)
//     head1->clear();
//     head2->clear();
//     newhead->clear();

//     return 0;
// }

//exercise 7
// Class LLNode representing a node of singly linked lists is declared as below:
// class LLNode {
// public:
//     int val;
//     LLNode* next;
//     LLNode(); // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode* next); // Constructor with customized data
// }
// Given a singly linked list head node and a integer k.
// Your task is to implement a function with following prototype:
// LLNode* rotateLinkedList(LLNode* head, int k);
// The function returns head node of the rotated singly linked list obtained after rotate the linked list to the right by k places.

// Note:
// - The iostream library has been used and namespace std is being used. No other libraries are allowed.
// - The constructors and methods of class LLNode have been defined fully so you do not need to redefine them.
// - You can write helper functions.

// For example:

// Test	Result
// int arr[] = {2, 4, 6, 6, 3};
// int k = 3;
// LLNode* head = LLNode::createWithIterators(arr, arr + sizeof(arr) / sizeof(int));
// LLNode::printList(head);
// cout << "\n";
// LLNode* newhead = rotateLinkedList(head, k);
// LLNode::printList(newhead);
// [2, 4, 6, 6, 3]
// [6, 6, 3, 2, 4]

// #include <iostream>

// using namespace std;

// // Class LLNode representing a node of singly linked lists
// class LLNode
// {
// public:
//     int val;
//     LLNode *next;

//     LLNode() : val(0), next(nullptr) {}                     // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode *next) : val(val), next(next) {} // Constructor with customized data

//     // Helper function to create a linked list from an array
//     static LLNode *createWithIterators(int *begin, int *end)
//     {
//         LLNode *head = nullptr;
//         LLNode *tail = nullptr;
//         for (int *it = begin; it != end; ++it)
//         {
//             LLNode *newNode = new LLNode(*it, nullptr);
//             if (!head)
//             {
//                 head = tail = newNode;
//             }
//             else
//             {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
//         return head;
//     }

//     // Helper function to print the linked list
//     static void printList(LLNode *head)
//     {
//         LLNode *current = head;
//         while (current)
//         {
//             cout << current->val;
//             if (current->next)
//             {
//                 cout << ", ";
//             }
//             current = current->next;
//         }
//         cout << endl;
//     }

//     // Helper function to clear the linked list
//     void clear()
//     {
//         LLNode *current = this;
//         while (current)
//         {
//             LLNode *next = current->next;
//             delete current;
//             current = next;
//         }
//     }
// };

// // Function to rotate the linked list to the right by k places
// LLNode *rotateLinkedList(LLNode *head, int k)
// {
//     // Check if head is null or k is 0
//     if (head == nullptr || k == 0)
//     {
//         return head;
//     }

//     // Initialize a pointer to the head node
//     LLNode *current = head;
//     // Initialize a length variable to 1
//     int length = 1;

//     // Traverse the list to find the length and the last node
//     while (current->next != nullptr)
//     {
//         current = current->next;
//         length++;
//     }

//     // Connect the last node to the head to make it circular
//     current->next = head;

//     // Calculate the effective rotations needed (k % length)
//     k = k % length;
//     // Calculate the number of steps to the new head (length - k)
//     int stepsToNewHead = length - k;

//     // Initialize a pointer to the head node
//     current = head;
//     // Traverse the list to find the new tail (steps - 1)
//     for (int i = 1; i < stepsToNewHead; i++)
//     {
//         current = current->next;
//     }

//     // Set the new head to the next node of the new tail
//     LLNode *newHead = current->next;
//     // Break the circular link by setting the next of the new tail to null
//     current->next = nullptr;

//     // Return the new head
//     return newHead;
// }

// int main()
// {
//     // Test case for rotateLinkedList
//     int arr[] = {2, 4, 6, 6, 3};
//     int k = 3;
//     LLNode *head = LLNode::createWithIterators(arr, arr + sizeof(arr) / sizeof(int));
//     LLNode::printList(head); // Expected: 2, 4, 6, 6, 3
//     cout << "\n";
//     LLNode *newhead = rotateLinkedList(head, k);
//     LLNode::printList(newhead); // Expected: 6, 6, 3, 2, 4
//     newhead->clear();

//     return 0;
// }

//exercise 8
// Class LinkedList is used to represent single linked list, described as the following:
// class LinkedList {
//     public: 
//         class Node;
//     private:
//         Node* head;
//         Node* tail;
//         int size;
//     public: 
//         class Node {
//             private: 
//                 int value;
//                 Node* next;
//                 friend class LinkedList;
//             public:
//                 Node() {
//                     this->next = NULL;
//                 }
//                 Node(Node* node) {
//                     this->value = node->value;
//                     this->next = node->next;
//                 }
//                 Node(int value, Node* next = NULL) {
//                     this->value = value;
//                     this->next = next;
//                 }
//         };
//         LinkedList(): head(NULL), tail(NULL), size(0) {};
// 	void partition(int k);
// };
// In this class; head, tail and size are the pointers of the first element, the last element and size of linked list.
// Request: Implement function 
// void LinkedList::partition(int k);
// To rearrange elements in this linked list by this way: split all elements of this linked list to 3 groups include: group I (the value  of each element is smaller than k), group II (the value of each element is equal to k) and group III (the value of each element is larger than k); after that, move group I to the head  of linked list, group II is after group I and group III is after group II. Note that the orders of the elements of each group are unchanged.
// Example:

// - The given linked list: 10->55->45->42->50

// - k=45

// In this case, group I includes elements with value 10 and 42, group II includes elements with 45 and group III includes elements with value 55 and 50. Rearrange by above way,  this linked list will become 10->42->45->55->50 (the orders of th elements in each group is unchanged: 10 before 42 and 55 before 50). 
// Note: In this exercise, libraries iostream, sstream and using namespace std; have been used. You can add other functions for your answer, but you are not allowed to add other libraries.

// For example:

// Test	Result
// LinkedList* l1 = new LinkedList();
// l1->add(20); l1->add(30); l1->add(10); l1->add(60); l1->add(40); l1->add(45); l1->add(55);
// l1->partition(45);
// cout << l1->toString() << "\n";
// [20,30,10,40,45,60,55]

// #include <iostream>
// #include <sstream>

// using namespace std;

// class LinkedList
// {
// public:
//     class Node;

// private:
//     Node *head;
//     Node *tail;
//     int size;

// public:
//     class Node
//     {
//     private:
//         int value;
//         Node *next;
//         friend class LinkedList;

//     public:
//         Node()
//         {
//             this->next = NULL;
//         }
//         Node(Node *node)
//         {
//             this->value = node->value;
//             this->next = node->next;
//         }
//         Node(int value, Node *next = NULL)
//         {
//             this->value = value;
//             this->next = next;
//         }
//     };
//     LinkedList() : head(NULL), tail(NULL), size(0) {};

//     void add(int value)
//     {
//         Node *newNode = new Node(value);
//         if (tail == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//         size++;
//     }

//     string toString()
//     {
//         stringstream ss;
//         ss << "[";
//         Node *current = head;
//         while (current != NULL)
//         {
//             ss << current->value;
//             if (current->next != NULL)
//             {
//                 ss << ",";
//             }
//             current = current->next;
//         }
//         ss << "]";
//         return ss.str();
//     }

//     void partition(int k)
//     {
//         // Initialize three dummy nodes to act as the heads of three groups: less, equal, and greater
//         Node dummyLess(0), dummyEqual(0), dummyGreater(0);
//         // Initialize three pointers to the current nodes in the three groups: lessTail, equalTail, and greaterTail
//         Node *lessTail = &dummyLess;
//         Node *equalTail = &dummyEqual;
//         Node *greaterTail = &dummyGreater;

//         // Initialize a pointer to the head of the original list
//         Node *current = head;

//         // Traverse the original list
//         while (current != NULL)
//         {
//             if (current->value < k)
//             {
//                 // Append the current node to the less group
//                 lessTail->next = current;
//                 lessTail = lessTail->next;
//             }
//             else if (current->value == k)
//             {
//                 // Append the current node to the equal group
//                 equalTail->next = current;
//                 equalTail = equalTail->next;
//             }
//             else
//             {
//                 // Append the current node to the greater group
//                 greaterTail->next = current;
//                 greaterTail = greaterTail->next;
//             }
//             // Move to the next node in the original list
//             current = current->next;
//         }

//         // Connect the three groups together
//         // If the less group is not empty
//         if (dummyLess.next != NULL)
//         {
//             head = dummyLess.next;
//             lessTail->next = (dummyEqual.next != NULL) ? dummyEqual.next : dummyGreater.next;
//         }
//         else if (dummyEqual.next != NULL)
//         {
//             // Else if the equal group is not empty
//             head = dummyEqual.next;
//             equalTail->next = dummyGreater.next;
//         }
//         else
//         {
//             // Else
//             head = dummyGreater.next;
//         }

//         // Set the tail of the list to the tail of the greater group (if not empty), else the tail of the equal group, else the tail of the less group
//         tail = (dummyGreater.next != NULL) ? greaterTail : (dummyEqual.next != NULL) ? equalTail
//                                                                                      : lessTail;

//         // Ensure the next pointer of the new tail is set to nullptr
//         tail->next = NULL;
//     }
// };

// int main()
// {
//     // Test case for partition
//     LinkedList *l1 = new LinkedList();
//     l1->add(20);
//     l1->add(30);
//     l1->add(10);
//     l1->add(60);
//     l1->add(40);
//     l1->add(45);
//     l1->add(55);
//     l1->partition(45);
//     cout << l1->toString() << "\n"; // Expected: [20,30,10,40,45,60,55]

//     delete l1;
//     return 0;
// }

//exercise 9
// Polynomials is an important application of arrays and linked lists. A polynomial is composed of different terms where each of them holds a coefficient and an exponent. A polynomial p(x) is the expression in variable x which is in the form (anxn + an-1xn-1 + .... + a1x+ a0), where an, an-1, ...., a0 fall in the category of real numbers and 'n' is the non-negative integer, which is called the degree of polynomial.

// Example: 10x2 + 26x, here 10 and 26 are coefficients and 2, 1 is its exponential value.

// Points to keep in Mind while working with Polynomials:
// - The sign of each coefficient and exponent is stored within the coefficient and the exponent itself.
// - The storage allocation for each term in the polynomial must be done in descending order of their exponent.

// In this question, complete SLinkedList class is included. You should use this class to complete your Polynomial class with initialized frame as following. This task is implement insertTerm to insert a term into a polynomial.
 

// class Polynomial;
// class Term {
// private:
//     double coeff;   
//     int exp;
//     friend class Polynomial;
// public:
//     Term(double coeff = 0.0, int exp = 0) {
//         this->coeff = coeff;
//         this->exp = exp;
//     }
//     bool operator==(const Term& rhs) const {
//         return this->coeff == rhs.coeff && this->exp == rhs.exp;
//     }
//     friend ostream & operator<<(ostream &os, const Term& term) {
//         cout << endl;
//         cout << "Term: " << "(" << term.coeff << " " << term.exp << ")";
//         return os;
//     }
// };
// class Polynomial {
// private:
//     SLinkedList<Term>* terms;
// public:
//     Polynomial() {
//         this->terms = new SLinkedList<Term>();
//     }
//     ~Polynomial() {
//         this->terms->clear();
//     }
//     void insertTerm(const Term& term);
//     void insertTerm(double coeff, int exp);
//     void print() {
//         SLinkedList<Term>::Iterator it;
//         cout << "[";
//         for (it = this->terms->begin(); it != this->terms->end(); it++) {
//             cout << (*it);
//         }
//         cout << endl << "]";
//     }
// };
 

 

// For example:

// Test	Result
// Polynomial *poly = new Polynomial();
// poly->insertTerm(6.0, 2);
// poly->insertTerm(4.0, 5);
// poly->insertTerm(4.0, 3);
// poly->insertTerm(6.0, 5);
// poly->insertTerm(-1.0, 0);
// poly->insertTerm(-6.0, 6);
// poly->insertTerm(6.0, 6);
// poly->print();
// [
// Term: (10 5)
// Term: (4 3)
// Term: (6 2)
// Term: (-1 0)
// ]
// int n = 5;
// int coeff[] = { 1, 2, 3, 4, 5 };
// int exp[] = { 1, 2, 3, 4, 5 };

// Polynomial p1;
// for (int i = 0; i < n; ++i)
//     p1.insertTerm(coeff[i], exp[i]);

// p1.print();
// [
// Term: (5 5)
// Term: (4 4)
// Term: (3 3)
// Term: (2 2)
// Term: (1 1)
// ]
