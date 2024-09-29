//excercise 1-2-3
// #include <iostream>
// #include <stdexcept>

// using namespace std;

// template <typename T>
// class IList
// {
// public:
//     virtual ~IList(){};
//     virtual void add(T e) = 0;
//     virtual void add(int index, T e) = 0;
//     virtual T removeAt(int index) = 0;
//     virtual bool removeItem(T item, void (*removeItemData)(T) = 0) = 0;
//     virtual bool empty() = 0;
//     virtual int size() = 0;
//     virtual void clear() = 0;
//     virtual T &get(int index) = 0;
//     virtual int indexOf(T item) = 0;
//     virtual bool contains(T item) = 0;
//     virtual string toString(string (*item2str)(T &) = 0) = 0;
// };

// template <class T>
// class ArrayList
// {
// protected:
//     T *data;      // dynamic array to store the list's items
//     int capacity; // size of the dynamic array
//     int count;    // number of items stored in the array
// public:
//     ArrayList()
//     {
//         capacity = 5;
//         count = 0;
//         data = new T[5];
//     }
//     ~ArrayList() { delete[] data; }
//     void add(T e);
//     void add(int index, T e);
//     int size();
//     int getCapacity();
//     void ensureCapacity(int index);
//     void printList(); // Function to print the list
//     T removeAt(int index);
//     bool removeItem(T item);
//     void clear();
//     T get(int index); // get the element at the index, if the index is out of range, "throw std::out_of_range("index is out of range");"
//     void set(int index, T e); // set the index position in the list with the value e
//     bool empty();
//     int indexOf(T item);      // get the first index of item in the list, else return -1
//     bool contains(T item);    // check if the item is in the list
// };

// template <class T>
// void ArrayList<T>::ensureCapacity(int cap)
// {
//     /*
//         if cap > capacity:
//             new_capacity = capacity * 1.5;
//             create new array with new_capacity
//         else: do nothing
//     */
//     // FUNCTION ensureCapacity(cap):
//     //     IF cap is greater than current capacity:
//     //         SET new_capacity to current capacity multiplied by 1.5
//     //         CREATE new array with size new_capacity
//     //         COPY elements from old array to new array
//     //         SET old array to new array
//     //         UPDATE capacity to new_capacity
//     //     END IF
//     // END FUNCTION
//     if (cap > this->capacity)
//     {
//         int new_capacity = std::max(cap, static_cast<int>(this->capacity * 1.5));
//         T *new_data = new T[new_capacity];

//         // Copy existing elements to the new array
//         for (int i = 0; i < this->count; ++i)
//         {
//             new_data[i] = this->data[i];
//         }

//         // Delete the old array
//         delete[] this->data;

//         // Update the data pointer and capacity
//         this->data = new_data;
//         this->capacity = new_capacity;
//     }
// }

// template <class T>
// void ArrayList<T>::add(T e)
// {
//     /* Insert an element into the end of the array. */
//     //     FUNCTION add(element):
//         //     IF size of array is equal to capacity:
//         //         CALL resize function to increase the capacity of the array
//         //     END IF

//         //     SET array[size] to element
//         //     INCREMENT size by 1
//     //      END FUNCTION
//     if (this->count == this->capacity)
//     {
//         this->ensureCapacity(this->capacity + 1);
//     }
//     this->data[this->count] = e;
//     this->count++;
    
// }

// template <class T>
// void ArrayList<T>::add(int index, T e)
// {
//     /*
//         FUNCTION add(index, element):
//             IF index is less than 0 OR index is greater than count:
//                 THROW std::out_of_range("the input index is out of range!")
//             END IF

//             IF count is equal to capacity:
//                 CALL ensureCapacity with capacity + 1
//             END IF

//             FOR i from count to index, decrementing by 1:
//                 SET data[i] to data[i - 1]
//             END FOR

//             SET data[index] to element
//             INCREMENT count by 1
//         END FUNCTION
//     */
//     if (index < 0 || index > this->count)
//     {
//         throw std::out_of_range("the input index is out of range!");
//     }
//     if (this->count == this->capacity)
//     {
//         this->ensureCapacity(this->capacity + 1);
//     }
//     for (int i = this->count; i > index; i--)
//     {
//         data[i] = data[i - 1];
//     }
//     data[index] = e;
//     count++;
// }

// template <class T>
// int ArrayList<T>::size()
// {
//     /*
//         FUNCTION size:
//             RETURN count
//         END FUNCTION
//     */
//     return this->count;
// }

// template <typename T>
// int ArrayList<T>::getCapacity()
// {
//     return capacity;
// }

// template <typename T>
// void ArrayList<T>::printList()
// {
//     for (int i = 0; i < count; ++i)
//     {
//         std::cout << data[i] << " ";
//     }
//     std::cout << std::endl;
// }

// template <class T>
// T ArrayList<T>::removeAt(int index)
// {
//     /*
//         FUNCTION removeAt(index):
//             IF index is less than 0 OR index is greater than or equal to count:
//                 THROW std::out_of_range("index is out of range")
//             END IF

//             SET removed_value to data[index]

//             FOR i from index to count - 2, incrementing by 1:
//                 SET data[i] to data[i + 1]
//             END FOR

//             DECREMENT count by 1

//             RETURN removed_value
//         END FUNCTION
//     */
//     if (index < 0 || index >= this->count)
//     {
//         throw std::out_of_range("the input index is out of range!");
//     }
//     T removed_data = data[index];
//     for (int i = index; i < count-1; i++)
//     {
//         data[i] = data[i+1];
//     }
//     count--;
//     return removed_data;
    
// }

// template <class T>
// bool ArrayList<T>::removeItem(T item)
// {
//     /*
//         FUNCTION removeItem(item):
//             FOR i from 0 to count - 1, incrementing by 1:
//                 IF data[i] is equal to item:
//                     CALL removeAt(i)
//                     RETURN true
//                 END IF
//             END FOR

//             RETURN false
//         END FUNCTION
//     */
//    for (int i = 0; i < count; i++)
//    {
//         if (data[i] == item)
//         {
//             this->removeAt(i);
//             return true;
//         }
//    }
//    return false;
// }

// template <class T>
// void ArrayList<T>::clear()
// {
//     /*
//         FUNCTION clear:
//             IF data is not NULL:
//                 DELETE data
//             END IF

//             SET count to 0
//             SET capacity to 5
//             CREATE new array with size capacity
//         END FUNCTION
//     */
//    if (data != nullptr)
//    {
//         delete[] this->data;
//    }
//    this->count = 0;
//    this->capacity = 5;
//    T *new_data = new T[this->capacity];
//    this->data = new_data;
// }
// template <class T>
// T ArrayList<T>::get(int index)
// {
//     /*
//         FUNCTION get(index):
//             IF index is less than 0 OR index is greater than or equal to count:
//                 THROW std::out_of_range("index is out of range")
//             END IF

//             RETURN data[index]
//         END FUNCTION
//     */
//    if (index < 0 || index >= count)
//    {
//         throw std::out_of_range("index is out of range");
//    }
//    return data[index];
// }

// template <class T>
// void ArrayList<T>::set(int index, T e)
// {
//     /*
//         FUNCTION set(index, element):
//             IF index is less than 0 OR index is greater than or equal to count:
//                 THROW std::out_of_range("index is out of range")
//             END IF

//             SET data[index] to element
//         END FUNCTION
//     */
//     if (index < 0 || index >= count)
//     {
//         throw std::out_of_range("index is out of range");
//     }
//     data[index] = e;
// }

// template <class T>
// bool ArrayList<T>::empty()
// {
//     /*
//         FUNCTION empty:
//             RETURN count is equal to 0
//         END FUNCTION
//     */
//     if (data != nullptr)
//     {
//         delete[] this->data;
//     }
//     this->count = 0;
//     this->capacity = 5;
//     T *new_data = new T[this->capacity];
//     this->data = new_data;
//     return 0;
// }

// template <class T>
// int ArrayList<T>::indexOf(T item)
// {
//     /*
//         FUNCTION indexOf(item):
//             FOR i from 0 to count - 1, incrementing by 1:
//                 IF data[i] is equal to item:
//                     RETURN i
//                 END IF
//             END FOR

//             RETURN -1
//         END FUNCTION
//     */
//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] == item)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// template <class T>
// bool ArrayList<T>::contains(T item)
// {
//     /*
//         FUNCTION contains(item):
//             RETURN indexOf(item) is not equal to -1
//         END FUNCTION
//     */
//     return indexOf(item) != -1;
// }

// int main()
// {
//     ArrayList<int> list;

//     // Initial list
//     list.add(10);
//     list.add(20);
//     list.add(30);

//     std::cout << "Initial list size: " << list.size() << std::endl;
//     std::cout << "Initial list capacity: " << list.getCapacity() << std::endl;
//     std::cout << "Initial list elements: ";
//     list.printList();

//     // Add more elements to test capacity increase
//     list.add(40);
//     list.add(50);
//     list.add(60);

//     std::cout << "List size after adding more elements: " << list.size() << std::endl;
//     std::cout << "List capacity after adding more elements: " << list.getCapacity() << std::endl;
//     std::cout << "List elements after adding more elements: ";
//     list.printList();

//     // Insert element at a specific index
//     list.add(2, 25);

//     std::cout << "List size after inserting element at index 2: " << list.size() << std::endl;
//     std::cout << "List capacity after inserting element at index 2: " << list.getCapacity() << std::endl;
//     std::cout << "List elements after inserting element at index 2: ";
//     list.printList();

//     // Remove element at a specific index
//     int removedElement = list.removeAt(2);
//     std::cout << "Removed element at index 2: " << removedElement << std::endl;
//     std::cout << "List size after removing element at index 2: " << list.size() << std::endl;
//     std::cout << "List capacity after removing element at index 2: " << list.getCapacity() << std::endl;
//     std::cout << "List elements after removing element at index 2: ";
//     list.printList();

//     // Remove a specific item
//     bool isRemoved = list.removeItem(50);
//     std::cout << "Removed item 50: " << (isRemoved ? "true" : "false") << std::endl;
//     std::cout << "List size after removing item 50: " << list.size() << std::endl;
//     std::cout << "List capacity after removing item 50: " << list.getCapacity() << std::endl;
//     std::cout << "List elements after removing item 50: ";
//     list.printList();

//     // Clear the list
//     list.clear();
//     std::cout << "List size after clearing: " << list.size() << std::endl;
//     std::cout << "List capacity after clearing: " << list.getCapacity() << std::endl;
//     std::cout << "List elements after clearing: ";
//     list.printList();

//     // Add elements again to test other functionalities
//     list.add(70);
//     list.add(80);
//     list.add(90);

//     // Get element at a specific index
//     int element = list.get(1);
//     std::cout << "Element at index 1: " << element << std::endl;

//     // Set element at a specific index
//     list.set(1, 85);
//     std::cout << "List elements after setting element at index 1 to 85: ";
//     list.printList();

//     // Check if the list is empty
//     bool isEmpty = list.empty();
//     std::cout << "Is the list empty? " << (isEmpty ? "true" : "false") << std::endl;

//     // Get the index of a specific item
//     int index = list.indexOf(85);
//     std::cout << "Index of item 85: " << index << std::endl;

//     // Check if the list contains a specific item
//     bool contains = list.contains(90);
//     std::cout << "Does the list contain item 90? " << (contains ? "true" : "false") << std::endl;

//     return 0;
// }

//exercise 4
// Given an array of integers nums and a two-dimension array of integers operations.
// Each operation in operations is represented in the form {L, R, X}. When applying an operation, all elements with index in range [L, R] (include L and R) increase by X.
// Your task is to implement a function with following prototype:
// vector<int> updateArrayPerRange(vector<int>& nums, vector<vector<int>>& operations);
// The function returns the array after applying all operation in operations.

// Note:
// - The iostream, and vector libraries have been included and namespace std is being used. No other libraries are allowed.
// - You can write helper functions.

// For example:

// Test	Result
// vector<int> nums {13, 0, 6, 9, 14, 16};
// vector<vector<int>> operations {{5, 5, 16}, {3, 4, 0}, {0, 2, 8}};
// printVector(updateArrayPerRange(nums, operations));
// [21, 8, 14, 9, 14, 32]

// #include <iostream>
// #include <vector>

// using namespace std;

// // Implement function
// vector<int> updateArrayPerRange(vector<int> &nums, vector<vector<int>> &operations)
// {
//     // FUNCTION updateArrayPerRange(nums, operations):
//     //     FOR each operation in operations:
//     //         SET L to operation[0]
//     //         SET R to operation[1]
//     //         SET X to operation[2]

//     //         FOR i from L to R:
//     //             INCREMENT nums[i] by X
//     //         END FOR
//     //     END FOR

//     //     RETURN nums
//     // END FUNCTION
//     for (vector<int> &operation : operations)
//     {
//         int L = operation[0];
//         int R = operation[1];
//         int X = operation[2];

//         for (int i = L; i <= R; i++)
//         {
//             nums[i] += X;
//         }
//     }

//     return nums;
// }

// // Helper function to print a vector
// void printVector(const vector<int> &nums)
// {
//     cout << "[";
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i];
//         if (i < nums.size() - 1)
//         {
//             cout << ", ";
//         }
//     }
//     cout << "]" << endl;
// }

// int main()
// {
//     vector<int> nums{13, 0, 6, 9, 14, 16};
//     vector<vector<int>> operations{{5, 5, 16}, {3, 4, 0}, {0, 2, 8}};
//     printVector(updateArrayPerRange(nums, operations));

//     return 0;
// }

//exercise 5
// Given an array of integers.
// Your task is to implement a function with the following prototype:
// bool consecutiveOnes(vector<int>& nums);
// The function returns if all the 1s appear consecutively in nums. If nums does not contain any elements, please return true

// Note:
// - The iostream and vector libraries have been included and namespace std are being used. No other libraries are allowed.
// - You can write helper functions.
// - Do not use global variables in your code.

// For example:

// Test	Result
// vector<int> nums {0, 1, 1, 1, 9, 8};
// cout << consecutiveOnes(nums);
// 1
#include <iostream>
#include <vector>

using namespace std;

// Function prototype
bool consecutiveOnes(vector<int>& nums);

// Pseudocode for the function
/*
bool consecutiveOnes(vector<int>& nums) {
    // If the array is empty, return true
    // Initialize a flag to check if we are in a sequence of 1s
    // Iterate through the array
        // If the current element is 1
            // If the flag is false, set it to true
        // Else if the current element is not 1
            // If the flag is true, break the loop
    // Iterate through the array again
        // If the current element is 1 and the flag is false, return false
    // Return true
}
*/

int main() {
    // Test cases
    vector<int> nums1 {0, 1, 1, 1, 9, 8};
    vector<int> nums2 {1, 1, 0, 1};
    vector<int> nums3 {0, 0, 0};
    vector<int> nums4 {1, 1, 1};
    vector<int> nums5 {};

    // Output results
    cout << consecutiveOnes(nums1) << endl; // Expected: 1
    cout << consecutiveOnes(nums2) << endl; // Expected: 0
    cout << consecutiveOnes(nums3) << endl; // Expected: 1
    cout << consecutiveOnes(nums4) << endl; // Expected: 1
    cout << consecutiveOnes(nums5) << endl; // Expected: 1

    return 0;
}

//exercise 6
// Thời gian còn lại 52:38:59
// Câu hỏi 6
// Not complete
// Đạt điểm 1,00
// Đặt cờ
// Đoạn văn câu hỏi
// The prices of all cars of a car shop have been saved as an array called N. Each element of the array N is the price of each car in shop. A person, with the amount of money k want to buy as much cars as possible. 

// Request: Implement function

// buyCar(int* nums, int length, int k);
// Where nums is the array N, length is the size of this array and k is the amount of money the person has. Find the maximum cars this person can buy with his money, and return that number.
// Example:

// nums=[90, 30, 20, 40, 50]; k=90; 

// The result is 3, he can buy the cars having index 1, 2, 3 (first index is 0).

// Note: The library iostream, 'algorithm' and using namespace std have been used. You can add other functions but you are not allowed to add other libraries.

// For example:

// Test	Result
// int nums[] = {90,30,40,90,20};
// int length = sizeof(nums)/sizeof(nums[0]);
// cout << buyCar(nums, length, 90) << "\n";
// 3

#include <iostream>
#include <algorithm>

using namespace std;

// Function prototype
int buyCar(int* nums, int length, int k);

// Pseudocode for the function
/*
int buyCar(int* nums, int length, int k) {
    // Sort the array of car prices in ascending order
    // Initialize a counter for the number of cars that can be bought
    // Initialize a variable to keep track of the total cost
    // Iterate through the sorted array
        // If the current car price can be afforded with the remaining money
            // Add the car price to the total cost
            // Increment the counter
        // Else
            // Break the loop as no more cars can be bought
    // Return the counter as the maximum number of cars that can be bought
}
*/

int main() {
    // Test cases
    int nums1[] = {90, 30, 20, 40, 50};
    int length1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = 90;

    int nums2[] = {90, 30, 40, 90, 20};
    int length2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = 90;

    // Output results
    cout << buyCar(nums1, length1, k1) << "\n"; // Expected: 3
    cout << buyCar(nums2, length2, k2) << "\n"; // Expected: 3

    return 0;
}

//exercise 7
// Given an array of integers.
// Your task is to implement a function with following prototype:
// int equalSumIndex(vector<int>& nums);
// The function returns the smallest index i such that the sum of the numbers to the left of i is equal to the sum of the numbers to the right.
// If no such index exists, return -1.

// Note:
// - The iostream and vector libraries have been included and namespace std is being used. No other libraries are allowed.
// - You can write helper functions.

// For example:

// Test	Result
// vector<int> nums {3, 5, 2, 7, 6, 4};
// cout << equalSumIndex(nums);
// 3
#include <iostream>
#include <vector>

using namespace std;

// Function prototype
int equalSumIndex(vector<int>& nums);

// Pseudocode for the function
/*
int equalSumIndex(vector<int>& nums) {
    // Initialize variables to store the total sum of the array and the left sum
    // Calculate the total sum of the array
    // Iterate through the array
        // Subtract the current element from the total sum to get the right sum
        // If the left sum is equal to the right sum, return the current index
        // Add the current element to the left sum
    // If no such index is found, return -1
}
*/

int main() {
    // Test cases
    vector<int> nums1 {3, 5, 2, 7, 6, 4};
    vector<int> nums2 {1, 2, 3, 4, 6};
    vector<int> nums3 {1, 2, 3, 3};
    vector<int> nums4 {1, 2, 3};
    vector<int> nums5 {2, 1, -1, 2};

    // Output results
    cout << equalSumIndex(nums1) << endl; // Expected: 3
    cout << equalSumIndex(nums2) << endl; // Expected: 3
    cout << equalSumIndex(nums3) << endl; // Expected: 2
    cout << equalSumIndex(nums4) << endl; // Expected: -1
    cout << equalSumIndex(nums5) << endl; // Expected: 1

    return 0;
}

//exercise 8
// Given an array of strings.
// Your task is to implement a function with following prototype:
// int longestSublist(vector<string>& words);
// The function returns the length of the longest subarray where all words share the same first letter.

// Note:
// - The iostream and vector libraries have been included and namespace std is being used. No other libraries are allowed.
// - You can write helper functions.

// For example:

// Test	Result
// vector<string> words {"faction", "fight", "and", "are", "attitude"};
// cout << longestSublist(words);
// 3
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function prototype
int longestSublist(vector<string>& words);

// Pseudocode for the function
/*
int longestSublist(vector<string>& words) {
    // Initialize variables to keep track of the longest sublist length and the current sublist length
    // Initialize a variable to store the first letter of the current sublist
    // Iterate through the list of words
        // If the current word starts with the same letter as the previous word
            // Increment the current sublist length
        // Else
            // Update the longest sublist length if the current sublist is longer
            // Reset the current sublist length to 1
            // Update the first letter of the current sublist
    // After the loop, update the longest sublist length if the last sublist is the longest
    // Return the longest sublist length
}
*/

int main() {
    // Test cases
    vector<string> words1 {"faction", "fight", "and", "are", "attitude"};
    vector<string> words2 {"apple", "banana", "apricot", "blueberry", "blackberry"};
    vector<string> words3 {"cat", "car", "dog", "deer", "elephant"};
    vector<string> words4 {"hello", "hi", "hey", "hola"};
    vector<string> words5 {"zebra", "zoo", "zebra", "zoo"};

    // Output results
    cout << longestSublist(words1) << endl; // Expected: 3
    cout << longestSublist(words2) << endl; // Expected: 2
    cout << longestSublist(words3) << endl; // Expected: 2
    cout << longestSublist(words4) << endl; // Expected: 4
    cout << longestSublist(words5) << endl; // Expected: 4

    return 0;
}