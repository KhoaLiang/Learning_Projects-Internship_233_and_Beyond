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
    bool empty();
    T get(int index);
    void set(int index, T e);
    int indexOf(T item);
    bool contains(T item);
    void clear();
    T removeAt(int index);
    bool removeItem(T item);
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

// Check if the list is empty
template<class T>
bool SLinkedList<T>::empty() {
    // Return true if count is 0, otherwise false
    if (count == 0)
    {
        return true;
    }
    return false;
}

// Get the element at a specific index
template<class T>
T SLinkedList<T>::get(int index) {
    // Check if the index is valid (0 <= index <= count)
    if (index < 0 || index > count)
    {
        throw out_of_range("Index out of range");
    }
    // Initialize a pointer to the head node
    Node *current = head;
    // Iterate to the node at the given index
    for (int i = 0; i < index; ++i)
    {
        current = current->next;
    }
    // Return the data of the node
    return current->data;
}

// Set the element at a specific index
template <class T>
void SLinkedList<T>::set(int index, T e) {
    // Check if the index is valid (0 <= index <= count)
    if (index < 0 || index > count)
    {
        throw out_of_range("Index out of range");
    }
    // Initialize a pointer to the head node
    Node *current = head;
    // Iterate to the node at the given index
    for (int i = 0; i < index; ++i)
    {
        current = current->next;
    }
    // Set the data of the node to the given element
    current->data = e;
}

// Return the first index where the item appears in the list
template<class T>
int SLinkedList<T>::indexOf(T item) {
    // Initialize a pointer to the head node
    Node *current = head;
    // Initialize an index counter to 0
    int index = 0;
    // While the current node is not nullptr
        // If the data of the current node equals the item
            // Return the index counter
        // Move to the next node
        // Increment the index counter
    // Return -1 if the item is not found
    while(current != nullptr){
        if (current->data == item)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

// Check if the item appears in the list
template<class T>
bool SLinkedList<T>::contains(T item) {
    // Return true if indexOf(item) is not -1, otherwise false
    if (indexOf(item) != -1)
    {
        return true;
    }
    return false;
}

// Remove element at index and return removed value
// Remove the first appearance of item in list and return true, otherwise return false
template <class T>
bool SLinkedList<T>::removeItem(T item)
{
    Node *current = head;
    Node *prev = nullptr;
    while (current != nullptr)
    {
        if (current->data == item)
        {
            if (prev == nullptr)
            {
                head = current->next;
                if (count == 1)
                {
                    tail = nullptr;
                }
            }
            else
            {
                prev->next = current->next;
                if (current->next == nullptr)
                {
                    tail = prev;
                }
            }
            delete current;
            count--;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

// Remove all elements in list
template <class T>
void SLinkedList<T>::clear()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    tail = nullptr;
    count = 0;
}

// Convert the list to a string representation
template <class T>
string SLinkedList<T>::toString() const
{
    stringstream ss;
    ss << "[";
    Node *current = head;
    while (current != nullptr)
    {
        ss << current->data;
        if (current->next != nullptr)
        {
            ss << ",";
        }
        current = current->next;
    }
    ss << "]";
    return ss.str();
}
