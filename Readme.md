# Library For Hybrid Sorting Algorithm

### Why Hybrid Sorting Algorithm in C Language? 
Standard C library provides qsort function that can be used for sorting , qsort function uses QuickSort algorithm to sort . C might be the fastest language but qsort is very slow. Quick sort is not a stable algorithm.

To solve this problem, this is a ***Tim Sort Library*** which is stable sort algorithm and more efficient than qsort function provided by C language

### Why Tim Sort?
As we know ***Insertion Sort*** is efficient for small data sets and provides stability. ***Merge Sort***  operates fine on any size of data it has a consistent speed on any size of data and it also provides stability. ***Tim Sort*** is a sorting algorithm based on Insertion Sort and Merge Sort.

### What is Tim Sort?
It first sort small pieces using Insertion Sort, then merges the pieces using merge of merge sort. Suppose we have to sort the Array we divide that Array into blocks known as Run. We sort those runs using insertion sort one by one and then merge those runs using the combine function used in merge sort. **If the size of the Array is less than run, then Array gets sorted just by using Insertion Sort.** The size of the run may vary from 32 to 64 depending upon the size of the array. 


**Note that The idea is based on the fact that insertion sort performs well for small size of data sets.**


### What is provided by Standard Template Library-C ?
This Standard Template Library designed for C provideds
* ***Linked-List*** (Functions like insertion, deletion, checkCycle, etc...) 
  * Singly-Linked-List
  * Doubly-Linked-List
* ***Stacks*** (Functions like push, pop, minimum element, maximum element, etc...)
  * Standard stack
  * Min-Stack
  * Max-Stack
* ***Queues*** (Function like enqueue, dequeue, peek, etc...) 
  * Standard Queue
  * Double-ended Queue ( Deque )
* ***Binary Tree and Binary Search Tree*** (Function like in-order,post-order and pre-order traversal, level-order traversal, etc...)
* ***Sorting Algorithms***
  * Quick Sort
  * Merge Sort
* ***Searching Algorithms***

### Specifications of some ***Basic functions*** of Different Data-structures
| Data Structure | Functions | Time Complexity | Space Complexity |
|----------------|-----------|-----------------|------------------|
|Linked-List| insertFromHead() | O(1) | O(1) |
|           | insertFromTail() | O(1) | O(1) |
|           | deleteFromHead() | O(1) | O(1) |
|           | deleteFromTail() | O(1) | O(1) |
|   Stack   |      push()      | O(1) | O(1) |
|           |      pop()       | O(1) | O(1) |
|           |      top()       | O(1) | O(1) |
|   Queue   |    enqueue()     | O(1) | O(1) |
|           |    dequeue()     | O(1) | O(1) |
|           |    peek()        | O(1) | O(1) |

### How to use this Standard Template Library in C?
To use this library, download the files in same folder where you have your file in which you want to use this library, then include this header libaray named CSTL.h
```C
 #include "tim_sort.h"
```
User can also download files in any place and use the path in include statement of the program where you want to use the library.

