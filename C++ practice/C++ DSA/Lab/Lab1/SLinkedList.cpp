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

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Template class for singly linked list
template <class T>
class SLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    SLinkedList();
    ~SLinkedList();
    void add(T e);
    void add(int index, T e);
    int size();
    string toString() const;
public:
    class Node {
    private:
        T data;
        Node* next;
        friend class SLinkedList<T>;
    public:
        Node() {
            next = nullptr;
        }
        Node(Node* next) {
            this->next = next;
        }
        Node(T data, Node* next) {
            this->data = data;
            this->next = next;
        }
    };
};

// Constructor
template <class T>
SLinkedList<T>::SLinkedList() {
    // Initialize head to nullptr
    this->head = nullptr;
    // Initialize tail to nullptr
    this->tail = nullptr;
    // Initialize count to 0
    count = 0;
}

// Destructor
// Destructor
template <class T>
SLinkedList<T>::~SLinkedList()
{
    Node *current = head; // Initialize a pointer to the head node
    while (current != nullptr)
    {                                   // While the current node is not nullptr
        Node *nextNode = current->next; // Store the next node
        delete current;                 // Delete the current node
        current = nextNode;             // Move to the next node
    }
    head = nullptr; // Optional: Set head to nullptr to avoid dangling pointer
}

// Add element to the end of the list
template <class T>
void SLinkedList<T>::add(T e) {
    // Create a new node with the given element
    Node *newNode = new Node(e, nullptr);
    // If the list is empty (head is nullptr)
        // Set head and tail to the new node
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    // Else
        // Set the next of tail to the new node
        // Update tail to the new node
    else{
        tail->next = newNode;
        tail = newNode;
    }
    // Increment the count
    count++;
}

// Add element at a specific index
template <class T>
void SLinkedList<T>::add(int index, T e) {
    // Check if the index is valid (0 <= index <= count)
    if (index < 0 || index > count)
    {
        throw out_of_range("Index out of range");
    }

    // Create a new node with the given element
    // If the index is 0
        // Set the next of the new node to head
        // Update head to the new node
        // If the list was empty, update tail to the new node
    // Else
        // Initialize a pointer to the head node
        // Iterate to the node just before the given index
        // Set the next of the new node to the next of the current node
        // Set the next of the current node to the new node
        // If the new node is added at the end, update tail to the new node
    // Increment the count
    Node *newNode = new Node(e, nullptr);
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        if (count == 0)
        {
            tail = newNode;
        }
    }
    else{
        Node *current = head;
        for (int i = 0; i < index - 1; ++i)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        // If the new node is added at the end, update tail to the new node
        if (newNode->next == nullptr)
        {
            tail = newNode;
        }
    }
    count++;
}

// Return the size of the list
template <class T>
int SLinkedList<T>::size() {
    // Return the count of nodes in the list
    return count;
}

// Method to convert list to string (for testing purposes)
template <class T>
string SLinkedList<T>::toString() const {
    stringstream ss;
    ss << "[";
    Node* current = head;
    while (current != nullptr) {
        ss << current->data;
        if (current->next != nullptr) {
            ss << ",";
        }
        current = current->next;
    }
    ss << "]";
    return ss.str();
}

int main() {
    // Test cases
    SLinkedList<int> list1;
    int size1 = 10;

    for (int index = 0; index < size1; index++) {
        list1.add(index);
    }

    cout << list1.toString() << endl; // Expected: [0,1,2,3,4,5,6,7,8,9]

    SLinkedList<int> list2;
    int size2 = 10;

    for (int index = 0; index < size2; index++) {
        list2.add(0, index);
    }

    cout << list2.toString() << endl; // Expected: [9,8,7,6,5,4,3,2,1,0]

    return 0;
}

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
//     // Initialize tail to nullptr
//     // Initialize count to 0
// }

// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList() {
//     // Initialize a pointer to the head node
//     // While the current node is not nullptr
//         // Store the next node
//         // Delete the current node
//         // Move to the next node
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(T e) {
//     // Create a new node with the given element
//     // If the list is empty (head is nullptr)
//         // Set head and tail to the new node
//     // Else
//         // Set the next of tail to the new node
//         // Update tail to the new node
//     // Increment the count
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
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
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size() {
//     // Return the count of nodes in the list
// }

// // Check if the list is empty
// template<class T>
// bool SLinkedList<T>::empty() {
//     // Return true if count is 0, otherwise false
// }

// // Get the element at a specific index
// template<class T>
// T SLinkedList<T>::get(int index) {
//     // Check if the index is valid (0 <= index < count)
//     // Initialize a pointer to the head node
//     // Iterate to the node at the given index
//     // Return the data of the node
// }

// // Set the element at a specific index
// template <class T>
// void SLinkedList<T>::set(int index, const T& e) {
//     // Check if the index is valid (0 <= index < count)
//     // Initialize a pointer to the head node
//     // Iterate to the node at the given index
//     // Set the data of the node to the given element
// }

// // Return the first index where the item appears in the list
// template<class T>
// int SLinkedList<T>::indexOf(const T& item) {
//     // Initialize a pointer to the head node
//     // Initialize an index counter to 0
//     // While the current node is not nullptr
//         // If the data of the current node equals the item
//             // Return the index counter
//         // Move to the next node
//         // Increment the index counter
//     // Return -1 if the item is not found
// }

// // Check if the item appears in the list
// template<class T>
// bool SLinkedList<T>::contains(const T& item) {
//     // Return true if indexOf(item) is not -1, otherwise false
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
//     // Test cases for exercise 1
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

//     // Test cases for exercise 2
//     SLinkedList<int> list3;
//     int values[]   = {10, 15, 2,  6,  4,  7,  40,  8};
//     int index[]    = {0,  0,  1,  3,  2,  3,  5,   0};
//     int expvalues[]= {8,  15, 2,  4,  7, 10,  40,  6}; 

//     for (int idx = 0; idx < 8; idx++){
//        list3.add(index[idx], values[idx]);
//     }

//     assert( list3.size() == 8 );
        
//     for (int idx = 0; idx < 8; idx++){
//         assert( list3.get(idx) == expvalues[idx] );
//     }

//     cout << list3.toString() << endl; // Expected: [8,15,2,4,7,10,40,6]

//     SLinkedList<int> list4;

//     assert( list4.empty() == true );
//     cout << list4.toString() << endl; // Expected: []

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
//     // Initialize tail to nullptr
//     // Initialize count to 0
// }

// // Destructor
// template <class T>
// SLinkedList<T>::~SLinkedList() {
//     // Initialize a pointer to the head node
//     // While the current node is not nullptr
//         // Store the next node
//         // Delete the current node
//         // Move to the next node
// }

// // Add element to the end of the list
// template <class T>
// void SLinkedList<T>::add(T e) {
//     // Create a new node with the given element
//     // If the list is empty (head is nullptr)
//         // Set head and tail to the new node
//     // Else
//         // Set the next of tail to the new node
//         // Update tail to the new node
//     // Increment the count
// }

// // Add element at a specific index
// template <class T>
// void SLinkedList<T>::add(int index, T e) {
//     // Check if the index is valid (0 <= index <= count)
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
// }

// // Return the size of the list
// template <class T>
// int SLinkedList<T>::size() {
//     // Return the count of nodes in the list
// }

// // Check if the list is empty
// template<class T>
// bool SLinkedList<T>::empty() {
//     // Return true if count is 0, otherwise false
// }

// // Get the element at a specific index
// template<class T>
// T SLinkedList<T>::get(int index) {
//     // Check if the index is valid (0 <= index < count)
//     // Initialize a pointer to the head node
//     // Iterate to the node at the given index
//     // Return the data of the node
// }

// // Set the element at a specific index
// template <class T>
// void SLinkedList<T>::set(int index, const T& e) {
//     // Check if the index is valid (0 <= index < count)
//     // Initialize a pointer to the head node
//     // Iterate to the node at the given index
//     // Set the data of the node to the given element
// }

// // Return the first index where the item appears in the list
// template<class T>
// int SLinkedList<T>::indexOf(const T& item) {
//     // Initialize a pointer to the head node
//     // Initialize an index counter to 0
//     // While the current node is not nullptr
//         // If the data of the current node equals the item
//             // Return the index counter
//         // Move to the next node
//         // Increment the index counter
//     // Return -1 if the item is not found
// }

// // Check if the item appears in the list
// template<class T>
// bool SLinkedList<T>::contains(const T& item) {
//     // Return true if indexOf(item) is not -1, otherwise false
// }

// // Remove element at index and return removed value
// template <class T>
// T SLinkedList<T>::removeAt(int index) {
//     // Check if the index is valid (0 <= index < count)
//     // Initialize a pointer to the head node
//     // If the index is 0
//         // Store the data of the head node
//         // Update head to the next node
//         // If the list had only one node, update tail to nullptr
//     // Else
//         // Initialize a pointer to the node just before the given index
//         // Store the data of the node at the given index
//         // Update the next of the previous node to the next of the current node
//         // If the node to be removed is the tail, update tail to the previous node
//     // Decrement the count
//     // Return the stored data
// }

// // Remove the first appearance of item in list and return true, otherwise return false
// template <class T>
// bool SLinkedList<T>::removeItem(const T& item) {
//     // Initialize a pointer to the head node
//     // Initialize a pointer to the previous node as nullptr
//     // While the current node is not nullptr
//         // If the data of the current node equals the item
//             // If the previous node is nullptr (item is at head)
//                 // Update head to the next node
//                 // If the list had only one node, update tail to nullptr
//             // Else
//                 // Update the next of the previous node to the next of the current node
//                 // If the node to be removed is the tail, update tail to the previous node
//             // Decrement the count
//             // Return true
//         // Update the previous node to the current node
//         // Move to the next node
//     // Return false if the item is not found
// }

// // Remove all elements in list
// template<class T>
// void SLinkedList<T>::clear() {
//     // Initialize a pointer to the head node
//     // While the current node is not nullptr
//         // Store the next node
//         // Delete the current node
//         // Move to the next node
//     // Update head and tail to nullptr
//     // Update count to 0
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
//     // Test cases for exercise 1
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

//     // Test cases for exercise 2
//     SLinkedList<int> list3;
//     int values[]   = {10, 15, 2,  6,  4,  7,  40,  8};
//     int index[]    = {0,  0,  1,  3,  2,  3,  5,   0};
//     int expvalues[]= {8,  15, 2,  4,  7, 10,  40,  6}; 

//     for (int idx = 0; idx < 8; idx++){
//        list3.add(index[idx], values[idx]);
//     }

//     assert( list3.size() == 8 );
        
//     for (int idx = 0; idx < 8; idx++){
//         assert( list3.get(idx) == expvalues[idx] );
//     }

//     cout << list3.toString() << endl; // Expected: [8,15,2,4,7,10,40,6]

//     SLinkedList<int> list4;

//     assert( list4.empty() == true );
//     cout << list4.toString() << endl; // Expected: []

//     // Test cases for exercise 3
//     SLinkedList<int> list5;

//     for (int i = 0; i < 10; ++i) {
//         list5.add(i);
//     }
//     assert(list5.get(0) == list5.removeAt(0));
//     cout << list5.toString() << endl; // Expected: [1,2,3,4,5,6,7,8,9]

//     SLinkedList<int> list6;

//     for (int i = 0; i < 10; ++i) {
//         list6.add(i);
//     }
//     assert(list6.get(9) == list6.removeAt(9));
//     cout << list6.toString() << endl; // Expected: [0,1,2,3,4,5,6,7,8]

//     SLinkedList<int> list7;

//     for (int i = 0; i < 10; ++i) {
//         list7.add(i);
//     }
//     assert(list7.removeItem(9));
//     cout << list7.toString() << endl; // Expected: [0,1,2,3,4,5,6,7,8]

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
// class LLNode {
// public:
//     int val;
//     LLNode* next;

//     LLNode() : val(0), next(nullptr) {} // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode* next) : val(val), next(next) {} // Constructor with customized data

//     // Helper function to create a linked list from an array
//     static LLNode* createWithIterators(int* begin, int* end) {
//         LLNode* head = nullptr;
//         LLNode* tail = nullptr;
//         for (int* it = begin; it != end; ++it) {
//             LLNode* newNode = new LLNode(*it, nullptr);
//             if (!head) {
//                 head = tail = newNode;
//             } else {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
//         return head;
//     }

//     // Helper function to print the linked list
//     static void printList(LLNode* head) {
//         LLNode* current = head;
//         while (current) {
//             cout << current->val;
//             if (current->next) {
//                 cout << ", ";
//             }
//             current = current->next;
//         }
//         cout << endl;
//     }

//     // Helper function to clear the linked list
//     void clear() {
//         LLNode* current = this;
//         while (current) {
//             LLNode* next = current->next;
//             delete current;
//             current = next;
//         }
//     }
// };

// // Function to reverse the linked list
// LLNode* reverseLinkedList(LLNode* head) {
//     // Initialize three pointers: prev, current, and next
//     // Set prev to nullptr
//     // Set current to head

//     // While current is not nullptr
//         // Store the next node (current->next) in next
//         // Reverse the current node's pointer (current->next = prev)
//         // Move prev and current one step forward (prev = current, current = next)

//     // After the loop, prev will be the new head of the reversed list
//     // Return prev
// }

// int main() {
//     // Test case
//     int arr[] = {13, 88, 60, 7, 192};
//     LLNode* head = LLNode::createWithIterators(arr, arr + sizeof(arr) / sizeof(int));
//     LLNode::printList(head); // Expected: [13, 88, 60, 7, 192]
//     cout << "\n";
//     LLNode* newhead = reverseLinkedList(head);
//     LLNode::printList(newhead); // Expected: [192, 7, 60, 88, 13]
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

//student answer
// template <class T>
// SLinkedList<T>::Iterator::Iterator(SLinkedList<T>* pList, bool begin)
// {
//     /*
//         Constructor of iterator
//         * Set pList to pList
//         * begin = true: 
//         * * Set current (index = 0) to pList's head if pList is not NULL
//         * * Otherwise set to NULL (index = -1)
//         * begin = false: 
//         * * Always set current to NULL
//         * * Set index to pList's size if pList is not NULL, otherwise 0
//     */
// }

// template <class T>
// typename SLinkedList<T>::Iterator& SLinkedList<T>::Iterator::operator=(const Iterator& iterator)
// {
//     /*
//         Assignment operator
//         * Set this current, index, pList to iterator corresponding elements.
//     */
// }

// template <class T>
// void SLinkedList<T>::Iterator::remove()
// {
//     /*
//         Remove a node which is pointed by current
//         * After remove current points to the previous node of this position (or node with index - 1)
//         * If remove at front, current points to previous "node" of head (current = NULL, index = -1)
//         * Exception: throw std::out_of_range("Segmentation fault!") if remove when current is NULL
//     */
// }

// template <class T>
// void SLinkedList<T>::Iterator::set(const T& e)
// {
//     /*
//         Set the new value for current node
//         * Exception: throw std::out_of_range("Segmentation fault!") if current is NULL
//     */
// }

// template <class T>
// T& SLinkedList<T>::Iterator::operator*()
// {
//     /*
//         Get data stored in current node
//         * Exception: throw std::out_of_range("Segmentation fault!") if current is NULL
//     */
// }

// template <class T>
// bool SLinkedList<T>::Iterator::operator!=(const Iterator& iterator)
// {
//     /*
//         Operator not equals
//         * Returns false if two iterators points the same node and index
//     */
// }

// // Prefix ++ overload
// template <class T>
// typename SLinkedList<T>::Iterator& SLinkedList<T>::Iterator::operator++()
// {
//     /*
//         Prefix ++ overload
//         * Set current to the next node
//         * If iterator corresponds to the previous "node" of head, set it to head
//         * Exception: throw std::out_of_range("Segmentation fault!") if iterator corresponds to the end
//     */
// }

// // Postfix ++ overload
// template <class T>
// typename SLinkedList<T>::Iterator SLinkedList<T>::Iterator::operator++(int)
// {
//     /*
//         Postfix ++ overload
//         * Set current to the next node
//         * If iterator corresponds to the previous "node" of head, set it to head
//         * Exception: throw std::out_of_range("Segmentation fault!") if iterator corresponds to the end
//     */
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


// LLNode* addLinkedList(LLNode* l0, LLNode* l1) {
//     // Initialize a dummy node to act as the head of the result list
//     // Initialize a pointer to the current node in the result list
//     // Initialize a carry variable to 0

//     // While either l0 or l1 is not null, or there is a carry
//         // Initialize sum to carry
//         // If l0 is not null
//             // Add l0's value to sum
//             // Move l0 to the next node
//         // If l1 is not null
//             // Add l1's value to sum
//             // Move l1 to the next node
//         // Update carry to sum / 10
//         // Create a new node with the value sum % 10
//         // Move the current pointer to the new node

//     // Return the next node of the dummy node (head of the result list)
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

// LLNode* rotateLinkedList(LLNode* head, int k) {
//     // Check if head is null or k is 0
//         // Return head

//     // Initialize a pointer to the head node
//     // Initialize a length variable to 1

//     // Traverse the list to find the length and the last node
//         // Increment length for each node
//         // Move to the next node

//     // Connect the last node to the head to make it circular

//     // Calculate the effective rotations needed (k % length)
//     // Calculate the number of steps to the new head (length - k)

//     // Initialize a pointer to the head node
//     // Traverse the list to find the new tail (steps - 1)
//         // Move to the next node

//     // Set the new head to the next node of the new tail
//     // Break the circular link by setting the next of the new tail to null

//     // Return the new head
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

// void LinkedList::partition(int k) {
//     // Initialize three dummy nodes to act as the heads of three groups: less, equal, and greater
//     // Initialize three pointers to the current nodes in the three groups: lessTail, equalTail, and greaterTail

//     // Initialize a pointer to the head of the original list

//     // Traverse the original list
//         // If the current node's value is less than k
//             // Append the current node to the less group
//         // Else if the current node's value is equal to k
//             // Append the current node to the equal group
//         // Else
//             // Append the current node to the greater group
//         // Move to the next node in the original list

//     // Connect the three groups together
//     // If the less group is not empty
//         // Set the head of the list to the head of the less group
//         // Connect the less group to the equal group (if not empty) or the greater group
//     // Else if the equal group is not empty
//         // Set the head of the list to the head of the equal group
//         // Connect the equal group to the greater group
//     // Else
//         // Set the head of the list to the head of the greater group

//     // Set the tail of the list to the tail of the greater group (if not empty), else the tail of the equal group, else the tail of the less group

//     // Ensure the next pointer of the new tail is set to nullptr
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

// void Polynomial::insertTerm(const Term& term) {
//     // Check if the coefficient of the term is zero
//         // Return without doing anything

//     // Initialize an iterator to traverse the terms list
//     // While the iterator is not at the end of the list
//         // If the exponent of the current term is equal to the exponent of the new term
//             // Add the coefficient of the new term to the current term's coefficient
//             // If the new coefficient is zero
//                 // Remove the current term from the list
//             // Return
//         // If the exponent of the current term is less than the exponent of the new term
//             // Insert the new term before the current term
//             // Return
//         // Move to the next term in the list

//     // If the new term has the smallest exponent, add it to the end of the list
// }

// void Polynomial::insertTerm(double coeff, int exp) {
//     // Create a new Term object with the given coefficient and exponent
//     // Call the insertTerm function with the new Term object
// }