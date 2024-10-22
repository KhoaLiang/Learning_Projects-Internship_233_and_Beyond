//excercise 1

// Implement methods add, size in template class DLinkedList(which implements List ADT) representing the doubly linked list with type T with the initialized frame.The description of each method is given in the code.

//                        template <class T>
//                        class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = NULL;
//             this->next = NULL;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = NULL;
//             this->next = NULL;
//         }
//     };
// };
// In this exercise, we have include<iostream>, <string>, <sstream> and using namespace std.For example :

//     Test Result DLinkedList<int>
//         list;
// int size = 10;
// for (int idx = 0; idx < size; idx++)
// {
//     list.add(idx);
// }
// cout << list.toString();
// [ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ] DLinkedList<int> list;
// int size = 10;
// for (int idx = 0; idx < size; idx++)
// {
//     list.add(0, idx);
// }
// cout << list.toString();
// [ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 ]

//code implementation

// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// template <class T>
// class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();
//     string toString() const;

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = nullptr;
//             this->next = nullptr;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = nullptr;
//             this->next = nullptr;
//         }
//     };
// };

// template <class T>
// DLinkedList<T>::DLinkedList()
// {
//     // Constructor implementation
//     // Initialize:
//     // - Set head to nullptr
//     // - Set tail to nullptr
//     // - Set count to 0
// }

// template <class T>
// DLinkedList<T>::~DLinkedList()
// {
//     // Destructor implementation
//     // Clear the list:
//     // - While head is not nullptr:
//     //   - Set temp to head
//     //   - Move head to the next node
//     //   - Delete temp
// }

// template <class T>
// void DLinkedList<T>::add(const T &e)
// {
//     // Insert an element into the end of the list
//     // Create a new node:
//     // - Allocate memory for a new node with data e
//     // - Set the next pointer of the new node to nullptr
//     // - Set the previous pointer of the new node to tail

//     // Insert the new node:
//     // - If tail is not nullptr:
//     //   - Set the next pointer of tail to the new node
//     // - Otherwise:
//     //   - Set head to the new node
//     // - Set tail to the new node

//     // Increment the count:
//     // - Increment count by 1
// }

// template <class T>
// void DLinkedList<T>::add(int index, const T &e)
// {
//     // Insert an element into the list at given index
//     // Check index validity:
//     // - If index is less than 0 or greater than count:
//     //   - Throw an out-of-range exception

//     // Create a new node:
//     // - Allocate memory for a new node with data e

//     // Insert at the beginning:
//     // - If index is 0:
//     //   - Set the next pointer of the new node to head
//     //   - If head is not nullptr:
//     //     - Set the previous pointer of head to the new node
//     //   - Set head to the new node
//     //   - If tail is nullptr:
//     //     - Set tail to the new node

//     // Insert at the end:
//     // - Else if index is equal to count:
//     //   - Set the previous pointer of the new node to tail
//     //   - If tail is not nullptr:
//     //     - Set the next pointer of tail to the new node
//     //   - Set tail to the new node
//     //   - If head is nullptr:
//     //     - Set head to the new node

//     // Insert in the middle:
//     // - Else:
//     //   - Traverse the list to the node at position index
//     //   - Set the next pointer of the new node to the current node
//     //   - Set the previous pointer of the new node to the previous node
//     //   - Set the next pointer of the previous node to the new node
//     //   - Set the previous pointer of the current node to the new node

//     // Increment the count:
//     // - Increment count by 1
// }

// template <class T>
// int DLinkedList<T>::size()
// {
//     // Return the length (size) of list
//     // Return the value of count
//     return 0;
// }

// template <class T>
// string DLinkedList<T>::toString() const
// {
//     stringstream ss;
//     ss << "[";
//     Node *current = head;
//     while (current != nullptr)
//     {
//         ss << current->data;
//         if (current->next != nullptr)
//         {
//             ss << ", ";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// // Explicit template instantiation
// template class DLinkedList<int>;
// template class DLinkedList<string>;

// int main()
// {
//     DLinkedList<int> list;
//     int size = 10;

//     // Test case 1: Adding elements to the end of the list
//     for (int idx = 0; idx < size; idx++)
//     {
//         list.add(idx);
//     }
//     cout << list.toString() << endl; // Expected: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

//     // Test case 2: Adding elements to the beginning of the list
//     DLinkedList<int> list2;
//     for (int idx = 0; idx < size; idx++)
//     {
//         list2.add(0, idx);
//     }
//     cout << list2.toString() << endl; // Expected: [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]

//     return 0;
// }

//excercise 2
// Implement methods get, set, empty, indexOf, contains in template class DLinkedList(which implements List ADT) representing the singly linked list with type T with the initialized frame.The description of each method is given in the code.

//                                             template <class T>
//                                             class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = NULL;
//             this->next = NULL;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = NULL;
//             this->next = NULL;
//         }
//     };
// };
// In this exercise, we have include<iostream>, <string>, <sstream> and using namespace std.For example :

//     Test Result DLinkedList<int>
//         list;
// int size = 10;
// for (int idx = 0; idx < size; idx++)
// {
//     list.add(idx);
// }
// for (int idx = 0; idx < size; idx++)
// {
//     cout << list.get(idx) << " |";
// }
// 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
//     DLinkedList<int> list;
// int size = 10;
// int value[] = {2, 5, 6, 3, 67, 332, 43, 1, 0, 9};
// for (int idx = 0; idx < size; idx++)
// {
//     list.add(idx);
// }
// for (int idx = 0; idx < size; idx++)
// {
//     list.set(idx, value[idx]);
// }
// cout << list.toString();
// [ 2, 5, 6, 3, 67, 332, 43, 1, 0, 9 ]


// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// template <class T>
// class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);
//     string toString() const;

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = nullptr;
//             this->next = nullptr;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = nullptr;
//             this->next = nullptr;
//         }
//     };
// };

// template <class T>
// DLinkedList<T>::DLinkedList()
// {
//     // Constructor implementation
//     // Initialize:
//     // - Set head to nullptr
//     // - Set tail to nullptr
//     // - Set count to 0
// }

// template <class T>
// DLinkedList<T>::~DLinkedList()
// {
//     // Destructor implementation
//     // Clear the list:
//     // - While head is not nullptr:
//     //   - Set temp to head
//     //   - Move head to the next node
//     //   - Delete temp
// }

// template <class T>
// void DLinkedList<T>::add(const T &e)
// {
//     // Insert an element into the end of the list
//     // Create a new node:
//     // - Allocate memory for a new node with data e
//     // - Set the next pointer of the new node to nullptr
//     // - Set the previous pointer of the new node to tail

//     // Insert the new node:
//     // - If tail is not nullptr:
//     //   - Set the next pointer of tail to the new node
//     // - Otherwise:
//     //   - Set head to the new node
//     // - Set tail to the new node

//     // Increment the count:
//     // - Increment count by 1
// }

// template <class T>
// void DLinkedList<T>::add(int index, const T &e)
// {
//     // Insert an element into the list at given index
//     // Check index validity:
//     // - If index is less than 0 or greater than count:
//     //   - Throw an out-of-range exception

//     // Create a new node:
//     // - Allocate memory for a new node with data e

//     // Insert at the beginning:
//     // - If index is 0:
//     //   - Set the next pointer of the new node to head
//     //   - If head is not nullptr:
//     //     - Set the previous pointer of head to the new node
//     //   - Set head to the new node
//     //   - If tail is nullptr:
//     //     - Set tail to the new node

//     // Insert at the end:
//     // - Else if index is equal to count:
//     //   - Set the previous pointer of the new node to tail
//     //   - If tail is not nullptr:
//     //     - Set the next pointer of tail to the new node
//     //   - Set tail to the new node
//     //   - If head is nullptr:
//     //     - Set head to the new node

//     // Insert in the middle:
//     // - Else:
//     //   - Traverse the list to the node at position index
//     //   - Set the next pointer of the new node to the current node
//     //   - Set the previous pointer of the new node to the previous node
//     //   - Set the next pointer of the previous node to the new node
//     //   - Set the previous pointer of the current node to the new node

//     // Increment the count:
//     // - Increment count by 1
// }

// template <class T>
// int DLinkedList<T>::size()
// {
//     // Return the length (size) of list
//     // Return the value of count
//     return 0;
// }

// template <class T>
// bool DLinkedList<T>::empty()
// {
//     // Check if the list is empty or not
//     // Return true if count is 0, otherwise return false
//     return false;
// }

// template <class T>
// T DLinkedList<T>::get(int index)
// {
//     // Give the data of the element at given index in the list
//     // Check index validity:
//     // - If index is less than 0 or greater than or equal to count:
//     //   - Throw an out-of-range exception

//     // Traverse the list to the node at position index
//     // Return the data of the node at position index
//     return T();
// }

// template <class T>
// void DLinkedList<T>::set(int index, const T &e)
// {
//     // Assign new value for element at given index in the list
//     // Check index validity:
//     // - If index is less than 0 or greater than or equal to count:
//     //   - Throw an out-of-range exception

//     // Traverse the list to the node at position index
//     // Set the data of the node at position index to e
// }

// template <class T>
// int DLinkedList<T>::indexOf(const T &item)
// {
//     // Return the first index where item appears in list, otherwise return -1
//     // Initialize index to 0
//     // Traverse the list:
//     // - If the data of the current node is equal to item:
//     //   - Return index
//     // - Increment index
//     // Return -1 if item is not found
//     return -1;
// }

// template <class T>
// bool DLinkedList<T>::contains(const T &item)
// {
//     // Check if item appears in the list
//     // Traverse the list:
//     // - If the data of the current node is equal to item:
//     //   - Return true
//     // Return false if item is not found
//     return false;
// }

// template <class T>
// string DLinkedList<T>::toString() const
// {
//     stringstream ss;
//     ss << "[";
//     Node *current = head;
//     while (current != nullptr)
//     {
//         ss << current->data;
//         if (current->next != nullptr)
//         {
//             ss << ", ";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// // Explicit template instantiation
// template class DLinkedList<int>;
// template class DLinkedList<string>;

// int main()
// {
//     DLinkedList<int> list;
//     int size = 10;

//     // Test case 1: Adding elements to the end of the list
//     for (int idx = 0; idx < size; idx++)
//     {
//         list.add(idx);
//     }
//     cout << list.toString() << endl; // Expected: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

//     // Test case 2: Adding elements to the beginning of the list
//     DLinkedList<int> list2;
//     for (int idx = 0; idx < size; idx++)
//     {
//         list2.add(0, idx);
//     }
//     cout << list2.toString() << endl; // Expected: [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]

//     // Test case 3: Checking if the list is empty
//     cout << (list.empty() ? "List is empty" : "List is not empty") << endl; // Expected: List is not empty

//     // Test case 4: Getting elements from the list
//     for (int idx = 0; idx < size; idx++)
//     {
//         cout << list.get(idx) << " |";
//     }
//     cout << endl; // Expected: 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |

//     // Test case 5: Setting elements in the list
//     int value[] = {2, 5, 6, 3, 67, 332, 43, 1, 0, 9};
//     for (int idx = 0; idx < size; idx++)
//     {
//         list.set(idx, value[idx]);
//     }
//     cout << list.toString() << endl; // Expected: [2, 5, 6, 3, 67, 332, 43, 1, 0, 9]

//     // Test case 6: Finding the index of an element
//     cout << "Index of 67: " << list.indexOf(67) << endl; // Expected: Index of 67: 4

//     // Test case 7: Checking if an element is in the list
//     cout << (list.contains(67) ? "List contains 67" : "List does not contain 67") << endl; // Expected: List contains 67

//     return 0;
// }

//excercise 3
// Implement methods removeAt, removeItem, clear in template class SLinkedList(which implements List ADT) representing the singly linked list with type T with the initialized frame.The description of each method is given in the code.

//                                         template <class T>
//                                         class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);
//     T removeAt(int index);
//     bool removeItem(const T &item);
//     void clear();

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = NULL;
//             this->next = NULL;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = NULL;
//             this->next = NULL;
//         }
//     };
// };
// In this exercise, we have include<iostream>, <string>, <sstream> and using namespace std.For example :

//     Test Result DLinkedList<int>
//         list;
// int size = 10;
// int value[] = {2, 5, 6, 3, 67, 332, 43, 1, 0, 9};

// for (int idx = 0; idx < size; idx++)
// {
//     list.add(value[idx]);
// }
// list.removeAt(0);
// cout << list.toString();
// [ 5, 6, 3, 67, 332, 43, 1, 0, 9 ]


// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// template <class T>
// class DLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     DLinkedList();
//     ~DLinkedList();
//     void add(const T &e);
//     void add(int index, const T &e);
//     int size();
//     bool empty();
//     T get(int index);
//     void set(int index, const T &e);
//     int indexOf(const T &item);
//     bool contains(const T &item);
//     T removeAt(int index);
//     bool removeItem(const T &item);
//     void clear();
//     string toString();

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         Node *previous;
//         friend class DLinkedList<T>;

//     public:
//         Node()
//         {
//             this->previous = nullptr;
//             this->next = nullptr;
//         }

//         Node(const T &data)
//         {
//             this->data = data;
//             this->previous = nullptr;
//             this->next = nullptr;
//         }
//     };
// };

// template <class T>
// T DLinkedList<T>::removeAt(int index)
// {
//     // Remove element at index and return removed value
//     // Check index validity:
//     // - If index is less than 0 or greater than or equal to count:
//     //   - Throw an out-of-range exception

//     // Find the node at the given index:
//     // - Traverse the list to the node at position index

//     // Remove the node:
//     // - If the node is head:
//     //   - Set head to the next node
//     //   - If head is not nullptr:
//     //     - Set the previous pointer of head to nullptr
//     // - Else if the node is tail:
//     //   - Set tail to the previous node
//     //   - If tail is not nullptr:
//     //     - Set the next pointer of tail to nullptr
//     // - Else:
//     //   - Set the next pointer of the previous node to the next node
//     //   - Set the previous pointer of the next node to the previous node

//     // Decrement the count:
//     // - Decrement count by 1

//     // Return the data of the removed node
// }

// template <class T>
// bool DLinkedList<T>::removeItem(const T &item)
// {
//     // Remove the first appearance of item in list and return true, otherwise return false
//     // Find the node with the given item:
//     // - Traverse the list to find the node with data equal to item

//     // If the node is found:
//     // - Remove the node (similar to removeAt)
//     // - Decrement the count
//     // - Return true

//     // If the node is not found:
//     // - Return false
// }

// template <class T>
// void DLinkedList<T>::clear()
// {
//     // Remove all elements in list
//     // While head is not nullptr:
//     // - Set temp to head
//     // - Move head to the next node
//     // - Delete temp

//     // Set tail to nullptr
//     // Set count to 0
// }
// template <class T>
// string DLinkedList<T>::toString()
// {
//     stringstream ss;
//     ss << "[";
//     Node *current = head;
//     while (current != nullptr)
//     {
//         ss << current->data;
//         if (current->next != nullptr)
//         {
//             ss << ", ";
//         }
//         current = current->next;
//     }
//     ss << "]";
//     return ss.str();
// }

// // Explicit template instantiation
// template class DLinkedList<int>;
// template class DLinkedList<string>;

// int main()
// {
//     DLinkedList<int> list;
//     int size = 10;
//     int value[] = {2, 5, 6, 3, 67, 332, 43, 1, 0, 9};

//     for (int idx = 0; idx < size; idx++)
//     {
//         list.add(value[idx]);
//     }

//     // Test removeAt
//     list.removeAt(0);
//     cout << list.toString() << endl; // Expected: [5, 6, 3, 67, 332, 43, 1, 0, 9]

//     // Test removeItem
//     list.removeItem(67);
//     cout << list.toString() << endl; // Expected: [5, 6, 3, 332, 43, 1, 0, 9]

//     // Test clear
//     list.clear();
//     cout << list.toString() << endl; // Expected: []

//     return 0;
// }

//excercise 4
// https://www.geeksforgeeks.org/list-cpp-stl/
// In this exercise, we will use Standard Template Library List(click open in other tab to show more) to implement a Data Log.

//                   This is a simple implementation in applications using undo and redo.For example in Microsoft Word,
//     you must have nodes to store states when Ctrl Z or Ctrl Shift Z to go back or forward.

//                                                                                       DataLog has a doubly linked list to store the states of data(an integer) and
//                                                                                       iterator to mark the current state.Each state is stored in a node,
//     the transition of states is depicted in the figure below.

//     Your task in this exercise is implement functions marked with /*  * TODO   */.

//     class DataLog
// {
// private:
//     list<int> logList;
//     list<int>::iterator currentState;

// public:
//     DataLog();
//     DataLog(const int &data);
//     void addCurrentState(int number);
//     void subtractCurrentState(int number);
//     void save();
//     void undo();
//     void redo();

//     int getCurrentStateData()
//     {
//         return *currentState;
//     }

//     void printLog()
//     {
//         for (auto i = logList.begin(); i != logList.end(); i++)
//         {
//             if (i == currentState)
//                 cout << "Current state: ";
//             cout << "[ " << *i << " ] => ";
//         }
//         cout << "END_LOG";
//     }
// };
// Note : Normally, when we say a List, we talk about doubly linked list.For implementing a singly linked list, we use forward list.

//                                                                                                              We have include<iostream><list> and using namespace std;
// For example :

//     Test Result
//         DataLog log(10);
// log.save();
// log.addCurrentState(15);
// log.save();
// log.addCurrentState(15);
// log.undo();
// log.printLog();
// [10] = > Current state : [25] = > [40] = > END_LOG
//                                                DataLog log(10);
// log.save();
// log.addCurrentState(15);
// log.save();
// log.addCurrentState(15);
// log.save();
// log.subtractCurrentState(5);
// log.printLog();
// [10] = > [25] = > [40] = > Current state : [35] = > END_LOG

//code to implement
// DataLog::DataLog()
// {
//     /*
//      * TODO:  add the first state with 0
//      */
// }

// DataLog::DataLog(const int &data)
// {
//     /*
//      * TODO:  add the first state with data
//      */
// }

// void DataLog::addCurrentState(int number)
// {
//     /*
//      * TODO: Increase the value of current state by number
//      */
// }

// void DataLog::subtractCurrentState(int number)
// {
//     /*
//      * TODO: Decrease the value of current state by number
//      */
// }

// void DataLog::save()
// {
//     /*
//      * TODO: This function will create a new state, copy the data of the currentState
//      *       and move the currentState Iterator to this new state. If there are other states behind the
//      *       currentState Iterator, we delete them all before creating a new state.
//      */
// }

// void DataLog::undo()
// {
//     /*
//      * TODO: Switch to the previous state of the data
//      *       If this is the oldest state in the log, nothing changes
//      */
// }

// void DataLog::redo()
// {
//     /*
//      * TODO: Switch to the latter state of the data
//      *       If this is the latest state in the log, nothing changes
//      */
// }


//exercise 5
// Given the head of a doubly linked list, two positive integer a and b where a <= b.Reverse the nodes of the list from position a to position b and return the reversed list

//                                                                                     Note : the position of the first node is 1. It is guaranteed that a and
//                                             b are valid positions.You MUST NOT change the val attribute in each node.

//                                             struct ListNode
// {
//     int val;
//     ListNode *left;
//     ListNode *right;
//     ListNode(int x = 0, ListNode *l = nullptr, ListNode *r = nullptr) : val(x), left(l), right(r) {}
// };

// Constraint : 1 <= list.length <= 10 ^ 5 0 <= node.val <= 5000 1 <= left <= right <= list.length

//                                                                                         Example 1 : Input : list = {3, 4, 5, 6, 7},
//                                                                                                             a = 2, b = 4 Output : 3 6 5 4 7

//                                                                                                                    Example 2 : Input : list = {8, 9, 10},
//                                                                                                             a = 1, b = 3 Output : 10 9 8

//                                                                                                                    For example :

//     Test Input Result int size;
// cin >> size;
// int *list = new int[size];
// for (int i = 0; i < size; i++)
// {
//     cin >> list[i];
// }
// int a, b;
// cin >> a >> b;
// unordered_map<ListNode *, int> nodeValue;
// ListNode *head = init(list, size, nodeValue);
// ListNode *reversed = reverse(head, a, b);
// try
// {
//     printList(reversed, nodeValue);
// }
// catch (char const *err)
// {
//     cout << err << '\n';
// }
// freeMem(head);
// delete[] list;
// 5 3 4 5 6 7 2 4 3 6 5 4 7 int size;
// cin >> size;
// int *list = new int[size];
// for (int i = 0; i < size; i++)
// {
//     cin >> list[i];
// }
// int a, b;
// cin >> a >> b;
// unordered_map<ListNode *, int> nodeValue;
// ListNode *head = init(list, size, nodeValue);
// ListNode *reversed = reverse(head, a, b);
// try
// {
//     printList(reversed, nodeValue);
// }
// catch (char const *err)
// {
//     cout << err << '\n';
// }
// freeMem(head);
// delete[] list;
// 3 8 9 10 1 3 10 9 8


//code to implement
/*
struct ListNode {
    int val;
    ListNode *left;
    ListNode *right;
    ListNode(int x = 0, ListNode *l = nullptr, ListNode* r = nullptr) : val(x), left(l), right(r) {}
};
*/

// ListNode *reverse(ListNode *head, int a, int b)
// {
//     / To Do
// }